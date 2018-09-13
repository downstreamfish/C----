/*
 * 练习函数的返回类型为指针
 */
#include <stdio.h>

char *select(char c);

char *select(char c)
{
   switch(c){
      case 'A': return "apple";
      case 'B': return "banana";
      case 'C': return "cat";
      case 'D': return "dog";
      default : return "none";
   }
}

int main()
{
   char ch;
   char *pc;
   printf("enter a charactor: ");
   scanf("%c", &ch);
   pc = select(ch);
   printf("%s\n", pc);
   return 0;
}
