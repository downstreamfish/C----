#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct BTNode{
   char data;
   struct BTNode * plchild;
   struct BTNode * prchild;
};
struct BTNode * create_btree();
void preTraverseBTree(struct BTNode *);
void inTraverseBTree(struct BTNode *);
void postTraverseBTree(struct BTNode *);

int main()
{
   struct BTNode * pt = create_btree();
   preTraverseBTree(pt);
   printf("\n------------\n");
   inTraverseBTree(pt);
   printf("\n------------\n");
   postTraverseBTree(pt);
   printf("\n------------\n");
   return 0;
}

struct BTNode * create_btree()
{
   struct BTNode * pM = malloc(sizeof(struct BTNode));
   struct BTNode * pF = malloc(sizeof(struct BTNode));
   struct BTNode * pB = malloc(sizeof(struct BTNode));
   struct BTNode * pL = malloc(sizeof(struct BTNode));
   struct BTNode * pE = malloc(sizeof(struct BTNode));
   struct BTNode * pA = malloc(sizeof(struct BTNode));
   struct BTNode * pQ = malloc(sizeof(struct BTNode));
   struct BTNode * pG = malloc(sizeof(struct BTNode));
   
   pM->data = 'M';
   pF->data = 'F';
   pB->data = 'B';
   pL->data = 'L';
   pA->data = 'A';
   pQ->data = 'Q';
   pG->data = 'G';
   pE->data = 'E';

   pM->plchild = pF;
   pM->prchild = pB;
   pF->plchild = NULL;
   pF->prchild = pL;
   pL->plchild = pA;
   pL->prchild = pQ;
   pA->plchild = pA->prchild = NULL;
   pQ->plchild = pG;
   pQ->prchild = NULL;
   pG->plchild = pG->prchild = NULL;
   pB->plchild = pE;
   pB->prchild = NULL;
   pE->plchild = pE->prchild = NULL;
   return pM;
}

void preTraverseBTree(struct BTNode * pt)
{
   if(NULL != pt){
      printf("%c ", pt->data);
      if(NULL != pt->plchild){
         preTraverseBTree(pt->plchild);
      }
      if(NULL != pt->prchild){
         preTraverseBTree(pt->prchild);
      }   
   }
   return;
} 

void inTraverseBTree(struct BTNode *pt)
{
   if(NULL != pt){
      if(NULL != pt->plchild){
         inTraverseBTree(pt->plchild);
      }
      printf("%c ", pt->data);
      if(NULL != pt->prchild){
         inTraverseBTree(pt->prchild);
      }
   }
   return;
}

void postTraverseBTree(struct BTNode *pt)
{
   if(NULL != pt){
      if(NULL != pt->plchild){
         postTraverseBTree(pt->plchild);
      }
      if(NULL != pt->prchild){
         postTraverseBTree(pt->prchild);
      }
      printf("%c ", pt->data);
   }
   return;
}
















