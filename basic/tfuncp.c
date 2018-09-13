/*
 * 函数指针： int (*p)(args, ...);
 * 指向函数的指针，函数的名字也是一个地址，定义一个指向函数的指针可以方便调用该函数
 * 示例中，calc()有一个参数是函数指针，调用calc时，可以方便的传人不同函数，实现不同的
 * 操作。add()和sub()函数作为被调用的函数，分别实现加和减的操作。
 */
#include <stdio.h>

int add(int, int);
int sub(int, int);
int calc(int(*p)(int, int), int, int);

int main()
{
   int x, y;
   printf("Enter two number for calculate: ");
   scanf("%d%d", &x, &y);
   printf("%d + %d = %d\n", x, y, calc(add, x, y));
   printf("%d - %d = %d\n", x, y, calc(sub, x, y));
   return 0;
}

int add(int a, int b)
{
   return a + b;
}

int sub(int a, int b)
{
   return a - b;
}

int calc(int (*p)(int, int), int a, int b)
{
   return (*p)(a, b);
}
