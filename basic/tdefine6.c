/*
 * 测试宏定义的可变参数
 */
#include <stdio.h>
#define SHOWLIST(...) printf(# __VA_ARGS__)
int main(void)
{
	SHOWLIST(FishC, 5550, 3.1\n);
	return 0;
}
