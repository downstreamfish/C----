#include <stdio.h>
#include <stdlib.h>

typedef struct Timer{
	int second;
	int minute;
	int hour;
}Time, *PTime;
PTime nextTime(PTime);
int main(void)
{
	Time t = {59, 59, 23};
	printf("current time is %02d:%02d:%02d\n", t.hour, t.minute, t.second);
	nextTime(&t);
	printf("current time is %02d:%02d:%02d\n", t.hour, t.minute, t.second);
	return 0;
}

PTime nextTime(PTime pt)
{
	if(pt->second >= 59){
		pt->second = 0;
		if(pt->minute >= 59){
			pt->minute = 0;
			if(pt->hour >= 23){
				pt->hour = 0;
			}else{
			    pt->hour++;
			}
		}else{
		    pt->minute++;
		}
	}else{
		pt->second++;
	}
	return pt;
}
