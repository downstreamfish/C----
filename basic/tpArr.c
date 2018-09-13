#include <stdio.h>
#include <string.h>

int main()
{
   int length, i;
   char *str = "To C, or not to C, that is a question.";
   length = strlen(str);
   for(i = 0; i < length; i++){
      printf("%c", str[i]);
   }
   printf("\n");
   return 0;
}
