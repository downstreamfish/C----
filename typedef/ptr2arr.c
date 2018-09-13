/*利用typedef定义一个指向数组的指针*/
#include<stdio.h>
typedef int (*PTR_TO_ARR)[3];
int main(void)
{
   int array[3] = {1, 2, 3};
   PTR_TO_ARR ptr2arry = &array;
   int i = 0;
   for(i = 0; i < 3; i++){
      printf("%d\n", (*ptr2arry)[i]);
   }
   return 0;
}
