#include <stdio.h>
int main()
{
   union usdata{
      int a;
      char c;
      int m;
   };
   union usdata ud1;
   ud1.a = 4;
   ud1.c = 'd';
   printf("%p\n %p\n %p\n",&ud1.a, &ud1.c, &ud1.m);
   printf("%d\n", sizeof(union usdata));
   return 0;
}
