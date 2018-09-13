/*左移实现乘法，右移实现除法*/
#include <stdio.h>
int main(void)
{
   int m = 1;
   while(m < 1024){
      m <<= 1;
      printf("m = %d\n", m);
   }
   printf("=====================\n");
   m = 1024;
   while(m > 0){
      m >>= 2;
      printf("m = %d\n", m);
   }
   return 0;
}
