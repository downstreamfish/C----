/*
 * 演示gcc的调试
 */

#include <stdio.h>

int main(void)
{
   int input = 0;
   printf("Enter a interger: ");
   scanf("%d", input);

   printf("Twice the number you supplied is %d\n", 2 * input);
   return 0;
}

