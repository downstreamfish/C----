/*********************************************
    > File Name: compr.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: Sun 29 Apr 2018 11:52:08 AM DST
 ****************************************/

#include<stdio.h>
int main(void)
{
	int a = 3, b = 3;
	int c, d, e;
	c = (a >= b)*a + (a < b)*b;
	d = a == b;
	e = a < b;
	printf("%d > %d = %d\n", a, b, c);
	printf("%d == %d = %d\n", a, b, d);
	printf("%d < %d = %d\n", a, b, e);
	return 0;
}
