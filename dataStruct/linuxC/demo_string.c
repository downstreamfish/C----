#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_print(char*);
void my_print2(char*);
int main(void)
{
   char my_string[] = "Hello world";
   my_print(my_string);
   my_print2(my_string);
   return 0;
}

void my_print(char *string)
{
   printf("The string is %s\n", string);
}

void my_print2(char *string)
{
   char *string2;
   int size, size2, j;
   size  = strlen(string);
   size2 = size - 1;
   string2 = (char *)malloc(size + 1);
   for(j = 0; j < size; j++){
      string2[size2 -j] = string[j];
   }
   string2[size] = '\0';
   printf("The string printed backword is %s\n", string2);
}
