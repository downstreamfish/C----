#include<stdio.h>
struct stds{
   int id;
   char name[5];
   int age;
};
int main()
{
   printf("%d\n",(int)sizeof(struct stds));
   return 0;
}
