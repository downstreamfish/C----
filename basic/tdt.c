#include <stdio.h>
#include <time.h>

int main()
{
   time_t rawtime;
   struct tm * info;
   char buffer[80];
   time(&rawtime);
   info = localtime(&rawtime);
   printf("The local time is: %s\n", asctime(info));
   return 0;
}
