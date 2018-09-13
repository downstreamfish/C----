#include <stdio.h>
#include <string.h>
 
int main()
{
   int i, j = 0;
   char str1[] = "We ";
   char str2[] = "love ";
   char str3[] = "Bangladesh";
   char str4[100];
   for(i = 0; i < strlen(str1); i++){
      str4[j++] = str1[i];
   }
   for(i = 0; i < strlen(str2); i++){
      str4[j++] = str2[i];
   }
   for(i = 0; i < strlen(str3); i++){
      str4[j++] = str3[i];
   }
   str4[j] = '\0';
   printf("%s\n", str4);
   return 0;
}
