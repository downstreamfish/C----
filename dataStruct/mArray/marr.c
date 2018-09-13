#include <stdio.h>
#include <stdlib.h>
#include "marray.h"

int main()
{
   int val;
   struct mArray arr;
   init_arr(&arr, 6);
   append_arr(&arr, 8);
   append_arr(&arr, 4);
   append_arr(&arr, 6);
   append_arr(&arr, 10);
   insert_arr(&arr, 4, 33);
   insert_arr(&arr, 2, 55);
   show_arr(&arr);
   inversion_arr(&arr);
   show_arr(&arr);
   sort_arr(&arr);
   show_arr(&arr);

   if(delete_arr(&arr, 8, &val)){
      printf("delete sucess, value is %d\n", val);
   }else{
      printf("delete failed.\n");
   }
   show_arr(&arr);
   return 0;
}
