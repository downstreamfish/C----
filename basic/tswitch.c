/*
 * something issue 
 * while can't work
 */

#include <stdio.h>
int main()
{
   char ch;
   printf("Enter yout degree(from 'A' to 'E'): ");
   scanf("%c", &ch);
   while(ch >= 'A' && ch <= 'E'){
      switch (ch){
	    case 'A': printf("You fraction big than 90\n"); break;
	    case 'B': printf("You fraction between 80 and 89\n"); break;
	    case 'C': printf("You fraction between 70 and 79\n"); break;
	    case 'D': printf("You fraction between 60 and 69\n"); break;
	    case 'E': printf("You fraction between 1 and 59\n"); break;
	    default: printf("this is default\n"); break;
      }
      printf("Enter yout degree(from 'A' to 'E'): ");
      scanf("%c", &ch);
   }
   return 0;
}
