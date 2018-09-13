/*
 * 测试if条件分支语句
 */
#include <stdio.h>
int main()
{
   int a, b;
   printf("Enter two number: ");
   scanf("%d%d", &a, &b);
   if(a != b){
      if(a > b){
	 printf("%d > %d\n", a, b);
      }else{
	 printf("%d < %d\n", a, b);
      }
   }else{
      printf("%d = %d\n", a, b);
   }
   return 0;
}
