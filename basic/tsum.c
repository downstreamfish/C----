#include <stdio.h>
int sum(int);

int main()
{
   int n = 0;
   printf("Enter a number for sum: ");
   scanf("%d", &n);
   int result = sum(n);
   printf("1 + 2 + 3 +...+ (n - 1) + n = %d\n", result);
   return 0;
}

int sum(int n)
{
   int s = 0;
   do{
      s += n;
   }while(n-- > 0);
   return s;
}
