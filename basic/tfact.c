/*
 * int putchar(int char)
 * write a unsigned char into stdout
 */
#include <stdio.h>

int main()
{
   int i, j;
   for(i = 1; i < 10; i++){
      for(j = 1; j < i + 1; j++){
	 printf("%d x %d = %d\t", j, i, i * j);
      }
      putchar('\n');
   }
   return 0;
}
