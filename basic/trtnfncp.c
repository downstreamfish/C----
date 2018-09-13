/*
 * 函数指针作为返回值
 * int (*select(char op))(int, int);
 * *理解为：select(char op)是函数返回int *(int，int)类型的函数指针
 */
#include <stdio.h>

int add(int, int);
int sub(int, int);
int calc(int(*fp)(int, int), int, int);
int (*select(char op))(int, int);

int add(int m, int n)
{
   return m + n;
}
int sub(int m, int n)
{
   return m - n;
}
int calc(int(*fp)(int, int), int a, int b)
{
   return (*fp)(a, b);
}

int (*select(char op))(int, int)
{
   switch(op){
      case '+': return add;
      case '-': return sub;
   }
}

int main()
{
   int num1, num2;
   char op;
   int (*fp)(int, int);
   printf("Enter the operation: ");
   scanf("%d%c%d", &num1, &op, &num2);
   fp = select(op);
   printf("%d %c %d = %d\n", num1, op, num2, calc(fp, num1, num2));
}
