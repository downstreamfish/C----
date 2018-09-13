#include <stdio.h>
int main()
{
   int i, j;
   int matrix[4][5] = {
      {80, 92, 85, 86, 99},
      {78, 65, 89, 70, 99},
      {67, 78, 76, 89, 99},
      {88, 68, 98, 90, 99},
   };
   printf("-----------------\n");
   for(i = 0; i < 4; i++){
      for(j = 0; j < 5; j++){
	 printf("%d ", matrix[i][j]);
      }
      printf("\n");
   }
   printf("-----------------\n");
   for(j = 0; j < 5; j++){
      for(i = 0; i < 4; i++){
	 printf("%d ", matrix[i][j]);
      }
      printf("\n");
   }
   return 0;
}
