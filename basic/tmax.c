#include <stdio.h>

int max(int, int);

int main()
{
   int a, b;
   printf("Enter to number: ");
   scanf("%d%d", &a, &b);
   int m = max(a, b);
   printf("The max between %d and %d is: %d\n", a, b, m);
   return 0;
}

int max(int x, int y)
{
   if(x >= y){
      return x;
   }else{
      return y;
   }
}
