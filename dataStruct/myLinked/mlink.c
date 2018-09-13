#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "mlink.h"

PNODE create_list()
{
   int i, len, val;
   printf("Enter the length of list: ");
   scanf("%d", &len);
   PNODE phead = malloc(sizeof(NODE));
   if(phead == NULL){
      printf("Create list failed.\n");
      exit(EXIT_FAILURE);
   }
   PNODE ptail = phead;
   ptail->next = NULL;
   for(i = 0; i < len; i++){
      printf("Enter the value of new node: ");
      scanf("%d", &val);
      PNODE pnew = malloc(sizeof(NODE));
      if(pnew == NULL){
         printf("Create list failed.\n");
         exit(EXIT_FAILURE);
      }
      pnew->data = val;
      ptail->next = pnew;
      pnew->next = NULL;
      ptail = pnew;
   }
   return phead;
}

void traverse_list(PNODE phead)
{
   PNODE p;
   p = phead->next;
   while(NULL != p){
      printf("%d ", p->data);
      p = p->next;
   }
   printf("\n\n");
}
Bool is_empty(PNODE phead)
{
   if(NULL == phead->next){
      return True;
   }else{
      return False;
   }
}

int length_list(PNODE phead)
{
   int len = 0;
   PNODE p = phead->next;
   while(NULL != p){
      len++;
      p = p->next;
   }
   return len;
}
void sort_list(PNODE phead)
{
   int i, j, t, len;
   PNODE p, q;
   len = length_list(phead);
   for(i = 0, p = phead->next; i < len - 1; i++, p = p->next){
      for(j = i + 1, q = p->next; j < len; j++, q = q->next){
         if(p->data > q->data){
            t = p->data;
            p->data = q->data;
            q->data = t;
         }
      }
   }
}
Bool insert_list(PNODE phead, int pos, int val)
{
   int i;
   PNODE p = phead;
   i = 0;
   while(NULL != p && i < pos - 1){
      i++;
      p = p->next;
   }
   if(i > pos - 1 || NULL == p){  
      return False;
   }
   PNODE pnew = malloc(sizeof(NODE));
   if(NULL == pnew){
      printf("List insert failed.\n");
      exit(EXIT_FAILURE);
   }
   pnew->data = val;
   pnew->next = p->next;
   p->next = pnew;
   return True;
}

Bool delete_list(PNODE phead, int pos, int *pval)
{
   PNODE p = phead;
   int i = 0;
   if(NULL == p->next || i > pos - 1){
      return False;
   }
   while(NULL != p->next && i < pos -1){
      p = p->next;
      i++;
   }
   PNODE q = p->next;
   p->next = p->next->next;
   *pval = q->data;
   free(q);
   q = NULL;
   return True;
}






















