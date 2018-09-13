#include <stdio.h>

int main()
{
   int a = 3;
   int b = 2;
   int arr[3];
   arr[0] = 1;
   arr[1] = 10;
   arr[2] = 100;
   
   int *p = &a;
   p += 3;
   *p += 100;
   p = &a;
   int i;
   for(i = 0; i < 6; i++){
      printf("*p = %d\n", *p);
      p++;
   }
   printf("\n--------------------\n");
   p = &a;
   for(i = 0; i < 6; i++){
      printf("p[%d] = %d\n", i, p[i]);
   }
   return 0;
}
