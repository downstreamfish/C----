#include <stdio.h>
#include <stdlib.h>

typedef struct date{
	int day;
	int month;
	int year;
}Date, *PDate;


int numberOfDays(PDate );
int isleap(PDate );
PDate getDate(PDate );
PDate getTomorrow(PDate );

int main(int argc, char *argv[]) {
	Date today, *tomorrow = NULL;
	getDate(&today);
	tomorrow = getTomorrow(&today);
	printf("today: %d-%d-%d\n", today.month, today.day,today.year);
	printf("Tomorrow: %d-%d-%d", tomorrow->month, tomorrow->day, tomorrow->year);
	free(tomorrow);
	return 0;
}

PDate getTomorrow(PDate pd)
{
	PDate pt = malloc(sizeof(Date));
	
	if(pd->day != numberOfDays(pd)){
		pt->day = pd->day + 1;
		pt->month = pd->month;
		pt->year = pd->year;
	}else if(pd->month == 12){
		pt->day = 1;
		pt->month = 1;
		pt->year = pd->year + 1;
	}else{
		pt->day = 1;
		pt->month = pd->month + 1;
		pt->year = pd->year;
	}
	return pt;
}

PDate getDate(PDate pd){
	printf("Enter the date(month-day-year): ");
	scanf("%d-%d-%d", &pd->month, &pd->day, &pd->year);
	return pd;
}

int numberOfDays(PDate pd)
{
	int days;
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(pd->month == 2 && isleap(pd)){
		days = 29;
	}else{
		days = daysPerMonth[pd->month - 1];
	}
	
	return days;
}

int isleap(PDate pd)
{
	int leap = 0;
	if(((pd->year % 4 == 0) && (pd->year % 100 != 0)) || (pd->year % 400 == 0)){
		leap = 1;
	}
	return leap;
}
