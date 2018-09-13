#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "mQueue.h"

void init_queue(PQUEUE pq)
{
   pq->pbase = malloc(sizeof(int) * Q_LEN);
   if(pq->pbase == NULL){
      printf("Init queue failed.\n");
      exit(EXIT_FAILURE);
   }
   pq->front = 0;
   pq->rear = 0;
   return;
}

BOOL isfull_queue(PQUEUE pq)
{
   if((pq->rear + 1) % Q_LEN == pq->front){
     return TRUE;
   }else{
      return FALSE;
   }
}

BOOL en_queue(PQUEUE pq, int val)
{
   if(isfull_queue(pq)){
      printf("this queue is full, can't fill\n");
      return FALSE;
   }
   pq->pbase[pq->rear] = val;
   pq->rear = (pq->rear + 1) % Q_LEN;
   return TRUE;
}

void traverse_queue(PQUEUE pq)
{
   int i = pq->front;
   if(empty_queue(pq)){
      printf("this queue is empty\n");
      return;
   }
   while(i != pq->rear){
      printf("%d ", pq->pbase[i]);
      i = (i + 1) % Q_LEN;
   }
   printf("\n\n");
   return;
}

BOOL empty_queue(PQUEUE pq)
{
   if(pq->rear == pq->front){
      return TRUE;
   }else{
      return FALSE;
   }
}

BOOL out_queue(PQUEUE pq, int *pval)
{
   if(empty_queue(pq)){
      printf("empty queue, no element to out.\n");
      return FALSE;
   }else{
      *pval = pq->pbase[pq->front];
      pq->front = (pq->front + 1) % Q_LEN;
      return TRUE;
   }
}

























