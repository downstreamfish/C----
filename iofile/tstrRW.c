/*
 * 打开一个文件，写入字符串，然后关闭文件
 * 再次打开文件，读取字符串，打印，再关闭文件
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 1024
int main(void)
{
   FILE *fp;
   char buffer[MAX];
   if((fp = fopen("hello.txt", "w")) == NULL){
      printf("打开写入文件失败\n");
      exit(EXIT_FAILURE);
   }
   fputs("line one: To C, Or Not To C, That Is a Question.\n", fp);
   fputs("line two: Time fly like a arrow, fruit fly like banana.\n", fp);
   fputs("line three: keep it simple stupid.", fp);
   fclose(fp);

   if((fp = fopen("hello.txt", "r")) == NULL){
      printf("打开读取文件失败\n");
      exit(EXIT_FAILURE);
   }
   while(!feof(fp)){
      fgets(buffer, MAX, fp);
      printf("%s\n", buffer);
   }
   fclose(fp);
   return 0;
}
