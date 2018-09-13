/*
 *
 */
#include <stdio.h>

int main()
{
   char a = 0, b = 0;
   int *p = (int *)&b;
   *p = 521;
   printf("p --> %p \n", p);
   printf("%p, %p\n", &a, &b);
   printf("a = %d, b = %d \n", a, b);
   return 0;
}
