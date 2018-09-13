/*
 * 使用malloc动态分配一块内存，并使用memset初始化为0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  N 10
int main()
{
   int *ptr = NULL;
   ptr = malloc(sizeof(int) * N);
   if(NULL == ptr){
      printf("动态分配内存失败！\n");
      exit(EXIT_FAILURE);
   }
   memset(ptr, 0, N * sizeof(int));
   for(int i = 0; i < N; i++){
      printf("%d ", ptr[i]);
   }
   printf("\n");
   free(ptr);
   return 0;
}
