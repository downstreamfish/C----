/*
 * UpperCase->LowerCase, LowerCase->UpperCase
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
   int i;
   char str[100];
   scanf("%s", str);
   for(i = 0; i < strlen(str); i++){
      if(islower(str[i])){
         str[i] = toupper(str[i]);
      }else if(isupper(str[i])){
         str[i] = tolower(str[i]);
      }
   }   
   printf("%s\n", str);
   return 0;
}
