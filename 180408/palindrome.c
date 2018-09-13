/*
 *jugle a words is palindrome
 */
#include <stdio.h>
#include <string.h>

int main()
{
   int flag = 0, length, i;
   char str[100];
   scanf("%s", str);
   length = strlen(str) - 1;
   for(i = 0; i <= length / 2; i++){
      if(str[i] == str[length -i]){
         flag = 1;
      }else{
         flag = 0;
      }
   }
   if(flag == 1){
      printf("Yes, It is a palindrome.\n");
   }else{
      printf("No, It is not a palindrome.\n");
   }
   return 0;
}
