/*测试文件的打开关闭*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   FILE *fp;
   int ch;
   fp = fopen("hello.txt", "r");
   if(NULL == fp){
      printf("文件打开失败，程序终止");
      exit(EXIT_FAILURE);
   }
   while((ch = fgetc(fp)) != EOF){
      putchar(ch);
   }
   return 0;
}
