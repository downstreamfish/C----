#include <stdio.h>
#include <stdlib.h>
#include "mlink.h"

int main()
{  int len, val;
   PNODE pnode = create_list();
   if(is_empty(pnode)){
      printf("list is empty.\n");
   }else{
      printf("list is not empty.\n");
   }   
   len = length_list(pnode);
   printf("list length is; %d\n", len);
   insert_list(pnode, 3, 33);
   traverse_list(pnode);
   sort_list(pnode);
   if(delete_list(pnode, 2, &val)){
      printf("delete success, the deleted element: %d\n", val);
   }else{
      printf("delete failed. no such element in list.\n");
   }
   traverse_list(pnode);
   return 0;
}
