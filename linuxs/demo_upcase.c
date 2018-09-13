#include <stdio.h>
#include <string.h>

void upcase(char* input_str, char * new_str);

int main(void)
{
   char str1[100], str2[100];
   upcase("Hello", str1);

   printf("str1=%s\n", str1);

   return 0;
}

void upcase(char* input_str, char* new_str)
{
   int counter;

   strcpy(new_str, input_str);
   for(counter = 0; counter < strlen(new_str); counter++){
      if(new_str[counter] >= 97 && new_str[counter] <= 122){
         new_str[counter] -= 32;
      }
   }

}
