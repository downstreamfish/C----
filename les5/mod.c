#include <stdio.h>

int main()
{
   int m, n;
   printf("Enter a number m:\n");
   scanf("%d", &m);
   printf("Enter another number n:\n");
   scanf("%d", &n);
   if(n != 0)
   {
      printf("%d / %d = %d\n", m, n, m / n);
   }
   else
   {
      fprintf(stderr, "n can not be 0!\n");
      return 1;
   }
   return 0;
}
