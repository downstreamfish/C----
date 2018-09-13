#include <stdio.h>

int main()
{ 
   int i = 0;
   int length = 0;
   char str[100];
   scanf("%s",str);
   while(1){
      if(str[i] == '\0'){
         break;
      }
      i++;
      length++;
   }
   printf("length is: %d\n", length);
   return 0;
}
