/*
 * 程序测试堆与栈的区别，堆必修手动申请释放，且可以跨函数访问。栈由系统分配
 * 释放，函数内的局部变量不能互相访问
 */
#include <stdio.h>
#include <stdlib.h>

int *func(void);
int *func(void)
{
   int *ptr = NULL;
   ptr = malloc(sizeof(int));
   *ptr = 668;
   return ptr;
}

int main(void)
{
   int *p = func();
   printf("%d\n", *p);
   free(p);

   return 0;
}
