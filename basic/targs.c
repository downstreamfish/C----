/*
 * 这个例子测试可变参数
 * sum函数拥有不定数量的参数
 * 导入stdarg.h
 * 一个类型va_list, 三个宏，va_start,va_arg, va_end
 * va是variable-argument的缩写
 */
#include <stdio.h>
#include <stdarg.h>

int sum(int n, ...);

int sum(int n, ...)
{
   va_list vap;
   int i, sum = 0;
   va_start(vap, n);
   for(i = 0; i < n; i++){
      sum += va_arg(vap, int);
   }
   va_end(vap);
   return sum;
}

int main()
{
   int result;
   result = sum(4, 1, 2, 3, 4);
   printf("result = %d\n", result);
   return 0;
}
