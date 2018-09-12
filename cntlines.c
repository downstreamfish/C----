/**
 * 用途：此程序用于计算包含此文件的文件夹以及子文件内的C语言源代码的行数。
 * 并记录在同文件夹下的 lines.log 文件内，还有运行时的系统时间。
 */

#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>

#define MAX 256

long total;
int countLines(const char *filename);
int isCode(const char *filename);
void findAllDirs(const char *path);

int countLines(const char *filename)
{
   FILE *fp;
   int count = 0;
   int temp;

   if((fp = fopen(filename,"r"))==NULL){
      fprintf(stderr, "Can not open the file: %s\n", filename);
      return 0;
   }
   while((temp = fgetc(fp)) != EOF){
      if(temp == '\n'){
         count++;
      }
   }
   fclose(fp);
   return count;
}

int isCode(const char *filename)
{
   int length;
   length = strlen(filename);
   if(!strcmp(filename + (length - 2), ".c")){
      return 1;
   }else{
      return 0;
   }
}

void findAllDirs(const char *path)
{
   DIR * dp;
   struct dirent *entry;
   struct stat statbuf;
   if((dp=opendir(path))==NULL){
      fprintf(stderr, "The path %s is wrong!\n", path);
      return;
   }
   chdir(path);
   while((entry = readdir(dp))!=NULL){
      lstat(entry->d_name, &statbuf);
      if(!strcmp(".", entry->d_name)||!strcmp("..",entry->d_name))
	 continue;
      if(S_ISDIR(statbuf.st_mode)){
	 findAllDirs(entry->d_name);
      }else{
	 if(isCode(entry->d_name)){
	    total += countLines(entry->d_name);
	 }
      }
   }
   chdir("..");
   closedir(dp);
}
int main()
{
   FILE * fp;
   time_t rawtime;
   struct tm*st;

   fp = fopen("lines.log", "a");
   char path[MAX] = ".";


   printf("counting ....\n");
   findAllDirs(path);
   printf("You have write %ld lines code from now.\n", total);
   
   time(&rawtime);
   st = localtime(&rawtime);
   if(NULL==fp){
      printf("Can't open file\n");
      exit(-1);
   }
   fprintf(fp, "%s %ld %s %d-%d-%d %d:%2d:%2d\n", "\n You have write ",total, " lines code from now.\n", 1900+st->tm_year, 1+st->tm_mon,st->tm_mday,st->tm_hour,st->tm_min,st->tm_sec);
   fclose(fp);
   return 0;
}



















