/*
 * 递归实现阶乘
 */

#include <stdio.h>
long frecu(int n);
long frecu(int n)
{
   long result;
   if(n < 2){
      result = 1;
   }else{
      result = n * frecu(n - 1);
   }
}
int main(void)
{
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   printf("%d! = %ld\n", n, frecu(n));
   return 0;
}
