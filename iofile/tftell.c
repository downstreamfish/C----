#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   FILE *fp;
   if(NULL == (fp = fopen("source.txt", "w"))){
      printf("打开文件失败\n");
      exit(EXIT_FAILURE);
   }
   fputc('K', fp);
   printf("%ld\n",ftell(fp));
   fputs("iss\n", fp);
   printf("%ld\n",ftell(fp));
   fprintf(fp, "%s", "keep it simple stupid\n");
   printf("%ld\n", ftell(fp));
   fclose(fp);
   return 0;
}
