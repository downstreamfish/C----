#include <stdio.h>
int main()
{
   int a = 1024;
   char *str = "tumblr";
   void * pv = NULL;
   int *pa = &a;
   pv = pa;
   printf("pa = %p, pv = %p\n", pa, pv);
   pv = str;
   printf("str = %p, pv = %p\n", str, pv);
   printf("str = %s, *pv = %s\n", str, (char *)pv);
   printf("*pa = %d\n", *pa);
   return 0;
}
