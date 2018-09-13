#include <stdio.h>
#include <math.h>

int main()
{
   int si = pow(2,31) - 1;
   unsigned int usi = pow(2,32) - 1;
   printf("singned int: %d\n", si);
   printf("unsigned int: %u\n", usi);
   return 0;
}
