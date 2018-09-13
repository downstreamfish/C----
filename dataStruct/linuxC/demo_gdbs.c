#include <stdio.h>

int main(void)
{
   int input;
   printf("Enter an integer: ");
   scanf("%d", &input);

   printf("Twice the number you supplied is %d\n", 2 * input);
   return 0;
}
