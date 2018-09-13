/*
 * #的转化为字符串功能
 */
#include <stdio.h>
#define STR(s) # s
int main(void)
{
	printf("%s\n", STR(DEBAIN IS GREAT));
	printf(STR(Hello       %s num = %d\n),STR(FishC), 552);
	return 0;
}
