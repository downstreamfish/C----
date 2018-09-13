/*
 * 测试define ## 链接功能
 */
#include <stdio.h>
#define TOGETHER(x,y) x ## y
int main(void)
{
	printf("%d\n", TOGETHER(2,59));
	return 0;
}
