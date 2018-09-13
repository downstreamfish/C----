#ifndef MLINK_H
#define MLINK_H
#define Bool int
#define True 1
#define False 0

typedef struct Node{
   int data;
   struct Node* next;
}NODE, *PNODE;

PNODE create_list();
void traverse_list(PNODE phead);
Bool is_empty(PNODE phead);
int length_list(PNODE phead);
Bool insert_list(PNODE phead, int pos, int val);
Bool delete_list(PNODE phead, int pos, int *pval);
void sort_list(PNODE phead);

#endif
