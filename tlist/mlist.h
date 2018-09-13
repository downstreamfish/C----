#ifndef MLIST_H
#define MLIST_H
typedef struct Node{
   int data;
	struct Node *next;
}NODE, *PNODE;

void insertNode(PNODE *, int);
void printNode(PNODE);
#endif
