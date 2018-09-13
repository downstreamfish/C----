#include <stdio.h>
int main()
{
   char c = 'T';
   int d = 121;
   char *pc = &c;
   int *pd = &d;
   printf("*pc = %c\n", *pc);
   printf("*pd = %d\n", *pd);
   *pc = 'U';
   *pd += 7;
   printf("now *pc = %c\n", *pc);
   printf("now *pd = %d\n", *pd);
   printf("address pc :%p\n", pc);
   printf("address pd :%p\n", pd);
   printf("sizeof(pc) = %lu\n", sizeof(pc));
   printf("sizeof(pd) = %lu\n", sizeof(pd));
   return 0;
}
