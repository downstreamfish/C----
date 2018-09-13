#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void)
{
   FILE *fp;
   if(NULL == (fp = fopen("dout.txt", "r"))){
      fprintf(stderr, "错误原因是: %s\n", strerror(errno));
      exit(EXIT_FAILURE);
   }
   fputc('f', fp);
   if(ferror(fp)){
      fputs("出错了\n", stderr);
   }
 //  clearerr(fp);
   if(ferror(fp) || feof(fp)){
      fputs("发现错误了。\n", stderr);
   }
   fclose(fp);
   return 0;
}
