#include <stdio.h>

int main()
{
   int a;
   fprintf(stdout, "Enter a number: ");
   fscanf(stdin, "%d", &a);
   if(a <= 0)
   {
       fprintf(stderr,"a must > 0\n");
       return -1;  
    }  
   return 0;
}
