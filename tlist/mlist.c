#include<stdio.h>
#include<stdlib.h>
#include"mlist.h"

void insertNode(PNODE *phead, int val)
{
    PNODE previous;
	 PNODE current;
	 PNODE new;
	 
	 current = *phead;
	 previous = NULL;
	 while(current != NULL && current->data < val){
        previous = current;
		  current = current->next;
	 }
	 new  = (PNODE)malloc(sizeof(NODE));
    if(NULL == new){
        printf("插入失败，程序终止");
		  exit(EXIT_FAILURE);
    }
    new->data = val;
	 new->next = current;
	 if(previous == NULL){

	     *phead = new;
	 }else{
        previous->next = new;
	 }
}

void printNode(PNODE phead)
{
    PNODE node = phead;
	 while(NULL != node){
        printf("%d ", node->data);
		  node = node->next;
	 }
	 printf("\n");
}
