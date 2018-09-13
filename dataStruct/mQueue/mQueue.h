#ifndef MQUEUE_H
#define MQUEUE_H

#define BOOL int
#define TRUE 1
#define FALSE 0
#define Q_LEN 6

typedef struct Queue{
   int * pbase;
   int front;
   int rear;
}QUEUE, *PQUEUE;

void init_queue(PQUEUE pq);
BOOL isfull_queue(PQUEUE pq);
BOOL en_queue(PQUEUE pq, int val);
void traverse_queue(PQUEUE pq);
BOOL out_queue(PQUEUE pq, int *pval);
BOOL empty_queue(PQUEUE pq);

#endif
