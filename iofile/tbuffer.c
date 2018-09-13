#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   FILE *fp;
   if(NULL == (fp = fopen("out.txt","w"))){
      perror("文件打开失败，原因是");
      exit(EXIT_FAILURE);
   }
   fputs("To C, or not to C, that is a question.\n", fp);
   fflush(fp);
   getchar();
   
   fclose(fp);
   return 0;
}
