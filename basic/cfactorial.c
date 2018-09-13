/*********************************************
    > File Name: cfactorial.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: Mon 30 Apr 2018 06:52:23 PM DST
 ****************************************/
/*
 * 计算阶乘，练习使用递归
 */
#include<stdio.h>

int factor(int );

int main(void)
{
	int n = 5;
	int fact;
	fact = factor(n);
	printf("%d 的阶乘是: %d\n", n, fact);
	return 0;
}

int factor(int n)
{
	int f;
	if(n <= 1){
		f = 1;
	}else{
		f = n * factor(n - 1);
	}
	return f;
}
