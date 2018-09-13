/*
 * 该程序允许用户不断输入数字，直到输入-1停止。
 * 程序会利用realloc函数不断分配内存空间，并把结果保存。
 * 在用户输入终止后，打印所有输入数字
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i, num, count = 0;
   int * ptr = NULL;
   while(num != -1){
      printf("请输入一个数字（输入-1结束）：");
      scanf("%d", &num);
      count++;
      ptr = realloc(ptr, count * sizeof(int));
      if(NULL == ptr){
	 printf("内存分配失败！\n");
	 exit(EXIT_FAILURE);
      }
      ptr[count - 1] = num;
   }
   for(i = 0; i < count; i++){
      printf("%d ", ptr[i]);
   }
   printf("\n");
   free(ptr);
   return 0;
}
