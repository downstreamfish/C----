#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"

void InitList(PNODE *head)
{
   static PNODE ptail;
   PNODE node = (PNODE)malloc(sizeof(NODE));

   if(NULL == node){
      perror("error:");
      exit(EXIT_FAILURE);
   }
   head = node;
   node->next = NULL;
   ptail = node;
}
