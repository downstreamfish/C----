#include <stdio.h>

void hanoit(int n, char x, char y, char z)
{
   if(n <= 1){
      printf("%c -> %c\n", x, z);
   }else{
      hanoit(n - 1, x, z, y);
      printf("%c -> %c\n", x, z);
      hanoit(n - 1, y, x, z);
   }
}
int main()
{ 
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   hanoit(n, 'A', 'B', 'C');
   return 0;
}


