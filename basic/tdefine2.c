/*
 * 测试带有参数的宏定义
 */
#include <stdio.h>

#define MAX(x,y) ((x)>(y) ? (x) : (y))

int main(void)
{
   int a, b;
   a = 4;
   b = 8;
   printf("The max is %f\n", MAX(4.7, 5-3));
   return 0;
}
