/*
 *count how many words in a sentence
 */
#include <stdio.h>
#include <string.h>

int main()
{  
   int i, words_cnt = 0;
   char str[300];
   gets(str);
   if(strlen != 0){
      words_cnt = 1;
   }
   for(i = 0; i < strlen(str); i++){
      if(str[i] == ' ' || str[i] == '\0'){
         words_cnt++;
      }
   }
   printf("there are %d words in this sentence.\n", words_cnt);
   return 0;
}
