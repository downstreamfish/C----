/*
 * 这个程序用来查看编译后的代码块情况。利用size test.out
 * 分别查看空函数块，定义未初始化的变量，已初始化的变量，
 * 各个代码块的情形。
 */
#include <stdio.h>
int global_var = 123;
int main(void)
{
   int local_var1 = 990;
   static int local_var;
   return 0;
}     
