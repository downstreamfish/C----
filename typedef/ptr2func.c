/*函数的返回类型是一个指针数组*/
/* int *(arr[3])(int) */
#include<stdio.h>
typedef int *(*PTR_TO_FUN)(int);
int *funA(int num)
{
   printf("A: %d ", num);
   return &num;
}
int *funB(int num)
{
   printf("B: %d ", num);
   return &num;
}
int *funC(int num)
{
   printf("C: %d ", num);
   return &num;
}

int main(void)
{
   PTR_TO_FUN arr[3] = {&funA, &funB, &funC};
   int i;
   for(i = 0; i < 3; i++){
      printf("address: %p\n", (*arr[i])(i));
   }
   return 0;
}
