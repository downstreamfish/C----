#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
	
	printf("Enter the first(single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + j2 + i3 + j4 + i5;
	total = first_sum * 3 + second_sum;
	
	printf("check digit: %d", 9 - ((total -1) % 10));
	
	return 0;
}
