/*
 * 测试可变参数
 */
#include <stdio.h>
#define PRINT(format, ...) printf(# format, ##__VA_ARGS__)

int main(void)
{
	PRINT(num = %d\n, 314);
	PRINT(Hello Debain!\n);
	return 0;
}
