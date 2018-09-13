#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
   pid_t pid;
   if((pid = vfork()) < 0){
      printf("fork error!\n");
      exit(EXIT_FAILURE);
   }else if(pid == 0){
      printf("Child process is printing.\n");
   }else{
      printf("Parent process is printing.\n");
   }
   return 0;
}
