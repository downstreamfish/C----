#include <stdio.h>
#include "mQueue.h"

int main()
{
   QUEUE q;
   int val;
   init_queue(&q);
   out_queue(&q, &val);
   en_queue(&q, 1);
   en_queue(&q, 2);
   en_queue(&q, 3);
   en_queue(&q, 4);
   en_queue(&q, 5);
   en_queue(&q, 6);

   traverse_queue(&q);
   if(out_queue(&q, &val)){
      printf("queue out success, val = %d\n", val);
   }else{
      printf("queue out failed\n");
   }
   traverse_queue(&q);
   
   return 0;
}
