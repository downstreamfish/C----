#include <stdio.h>
#include <stdlib.h>

#define BIGNUM 5000

void index_to_the_moon(int array[]);

int main(void)
{
   int intary[10];
   int j;
   index_to_the_moon(intary);

   return 0;
}

void index_to_the_moon(int ary[])
{
   int j;
   for(j = 0; j < BIGNUM; j++){
      ary[j] = j;
   }
}
