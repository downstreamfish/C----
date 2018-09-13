#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/**
 * 练习 C 语言的函数。
 * 输入三个数数，程序输出任意两个数的平均数。
 */
float average(float m, float n)
{
	return (m + n) / 2;
}

int main(int argc, char *argv[]) {
	float x, y, z;
	printf("Enter three numbers: ");
	scanf("%f%f%f", &x, &y, &z);
	printf("Average of %g and %g: %g\n", x, y, average(x, y));
	printf("Average of %g and %g: %g\n", x, z, average(x, z));
	printf("Average of %g and %g: %g\n", y, z, average(y, z));
	return 0;
}
