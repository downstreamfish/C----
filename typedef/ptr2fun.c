/*定义一个指向函数的指针*/
#include<stdio.h>
typedef int (*PTR_TO_FUN)(void);

int func(void);
int func(void){
   return 525;
}
int main(void)
{
   PTR_TO_FUN ptr2fun = &func;
   printf("%d\n", (*ptr2fun)());
   return 0;
}
