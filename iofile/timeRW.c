/* 
 * 利用fprintf(FILE*stream, const char*format, ...)来把当前日期写入文件，关闭文件
 * 利用fscanf(FILE *stream, const char*format, ...)读取日期，打印，关闭文件
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
   FILE *fp;
   struct tm *st;
   time_t t;
   int year, month, day, hour, min, sec;
   time(&t);
   st = localtime(&t);
   if(NULL == (fp = fopen("date.txt","w"))){
      printf("打开写入文件失败\n");
      exit(EXIT_FAILURE);
   }
   fprintf(fp, "%d-%d-%d %d:%d:%d", 1900 + st->tm_year, 1 + st->tm_mon, st->tm_mday, st->tm_hour, st->tm_min, st->tm_sec);
   fclose(fp);

   if(NULL == (fp = fopen("date.txt","r"))){
      printf("打开读取文件失败\n");
      exit(EXIT_FAILURE);
   }
   fscanf(fp, "%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &min, &sec);
   printf("%d-%d-%d %d:%d:%d\n", year, month, day, hour, min, sec);
   fclose(fp);
   return 0;
}
