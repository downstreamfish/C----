#include <stdio.h>
int main()
{
   int i, j;
   for(i = 9; i > 0; i--){
      for(j = i; j > 0; j--){
	 printf("%d x %d = %d\t", j, i, j * i);
      }
      putchar('\n');
   }
   return 0;
}
