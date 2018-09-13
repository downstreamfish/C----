#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   i = 21;
   j = 56;
   i &= j;
   printf("i & j = %d\n", i);
   i ^= j;
   printf("i ^ j = %d\n", i);
   i |= j;
   printf("i | j = %d\n", i);
   return 0;
}
