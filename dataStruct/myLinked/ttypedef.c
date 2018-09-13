#include<stdio.h>

typedef struct Student{
   int sid;
   char sex;
}* PSTU, STU;

int main()
{
   STU st;
   PSTU pst = &st;
   pst->sid = 200;
   printf("psd->sid: %d\n", pst->sid);
   return 0;
}
