/*
 * 定义数据结构struct Node，含有数据域value，指针域struct Node*next
 * 以及可以执行的操作函数。
 */
#ifndef DLIST_H
#define DLIST_H
typedef struct Node{
   int value;
   struct Node *next;
}NODE, *PNODE;

void InitList(PNODE );
bool ListEmpty(PNODE);
void ClearList(PNODE);
void GetElem(PNODE, int, int *);
bool LocateElem(PNODE, int);
void ListInsert(PNODE, int, int);
void ListDelete(PNODE, int, int *);
int ListLength(PNODE);
#endif
