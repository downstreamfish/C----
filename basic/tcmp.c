#include <stdio.h>

int main()
{
   int a = 3, b = 3;
   if(a - b){
      printf("%d\n", a - b);
   }else{
      printf("just only 0 is not work\n");
   }
   /*as a is true, nothing happen to b*/
   (a = 0) && (b = 4);
   printf("a = %d, b = %d\n", a, b);
   (a = 1) || (b = 6);
   printf("a = %d, b = %d\n", a, b);
   return 0;
}
