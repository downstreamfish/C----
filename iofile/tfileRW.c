/* 
 *打开一个文件，按照一个一个字符读取，并写入到另一个文件之中，
 *最后关闭两个文件
 * */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   FILE *fp1, *fp2;
   int ch;
   fp1 = fopen("hello.txt", "r");
   fp2 = fopen("kiss.dat", "w");
   if(NULL == fp1){
      printf("打开读取文件失败\n");
      exit(EXIT_FAILURE);
   }
   if(NULL == fp2){
      printf("打开写入文件失败\n");
      exit(EXIT_FAILURE);
   }
   while((ch = fgetc(fp1)) != EOF){
      fputc(ch, fp2);
   }
   fclose(fp1);
   fclose(fp2);
   return 0;
}
