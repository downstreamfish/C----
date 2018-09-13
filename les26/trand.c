/* Tests the pseudo-random sequence generation functions */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, seed;
   printf("The RAND_MAX is: %d\n", RAND_MAX);
   printf("This program display the first ten value of rand.\n");
   for(;;){
      for(i = 0; i < 10 ; i++){
         printf("%d ", rand());
      }
      printf("\n\n");
      printf("Enter new seed value (0 to terminate): ");
      scanf("%d",&seed);
      if(seed == 0){
         break;
      }
      srand(seed);
   }
   return 0;
}
