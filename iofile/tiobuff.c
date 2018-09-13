#include <stdio.h>
#include <string.h>

int main(void)
{
   char buff[1024];
   memset(buff, '\0', sizeof(buff));
   setvbuf(stdout, buff, _IONBF, 1024);
   fprintf(stdout, "Time fly like a arrow\n");
   fflush(stdout);
   fprintf(stdout, "输入任意字符之后才会显示这行字符\n");
   getchar();

   return 0;
}
