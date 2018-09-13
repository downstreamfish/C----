#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int status;

   if((status=system(NULL))<0){
      printf("system error!\n");
      exit(0);
   }
   printf("1--exit status=%d\n", status);
   if((status=system("data"))<0){
      printf("system error!\n");
      exit(0);
   }
   printf("2--exit status= %d\n", status);
   if((status=system("invalidcommand"))<0){
      printf("system error!\n");
      exit(0);
   }
   printf("4--exit status=%d\n", status);
   if((status=system("who;exit44"))<0){
      printf("system error!\n");
      exit(0);
   }
   printf("5--exit status=%d\n", status);

   return 0;
}
