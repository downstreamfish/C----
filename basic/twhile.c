/*
 * int getchar(void);
 * return int,when file end ,return EOF
 */
#include <stdio.h>
int main()
{
   int cnt = 0;
   printf("Enter somthing for count: ");
   while(getchar() != '\n'){
      cnt++;
   }
   printf("You have input %d charctors.\n", cnt);
   return 0;
}
