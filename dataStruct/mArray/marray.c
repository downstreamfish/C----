#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "marray.h"

void init_arr(struct mArray * pArr, int length)
{
   pArr->pbase = malloc(sizeof(int) * length);
   if(pArr->pbase == NULL){
      printf("This array init failed.\n");
      exit(EXIT_FAILURE);
   }
   pArr->len = length;
   pArr->cnt = 0;

   return;
}
Bool is_empty(struct mArray * pArr)
{
   if(pArr->cnt == 0){
      return True;
   }else{
      return False;
   }
}
void show_arr(struct mArray *pArr)
{
   int i;
   if(is_empty(pArr)){
      printf("This array is empty.\n");
      return;
   }
   for(i = 0; i < pArr->cnt; i++){
      printf("%d ", pArr->pbase[i]);
   }
   printf("\n\n");
}
Bool is_full(struct mArray * pArr)
{
   if(pArr->cnt == pArr->len){
      return True;
   }else{
      return False;
   }
}
Bool append_arr(struct mArray *pArr, int value)
{ 
   if(is_full(pArr)){
      printf("This array is full,can't append element.\n");
      return False;
   }
   pArr->pbase[pArr->cnt++] = value;
   return True;
}

Bool insert_arr(struct mArray *pArr, int pos, int value)
{
    int i;
    if(is_full(pArr)){
       printf("This array is full, can't insert element.\n");
       return False;
    }
    
    if(pos < 1 || pos > pArr-> cnt + 1){
       printf("Illegal pos, this array's cnt: %d\n", pArr->cnt);
       return False;
    }
    for(i = pArr->cnt; i >= pos; i--){
       pArr->pbase[i] = pArr->pbase[i - 1];
    }
    pArr->pbase[pos - 1] = value;
    pArr->cnt++;
    return True;
}

void sort_arr(struct mArray *pArr)
{
   int i, j, t;
   if(is_empty(pArr)){
      printf("This array is empty, can't be sorted.\n");
      return;
   }
   for(i = 0; i < pArr->cnt; i++){
      for(j = i+ 1; j < pArr->cnt; j++){
         if(pArr->pbase[i] > pArr->pbase[j]){
            t = pArr->pbase[i];
            pArr->pbase[i] = pArr->pbase[j];
            pArr->pbase[j] = t;
         }
      }
   }
   return;
}

void inversion_arr(struct mArray *pArr)
{
   int i, j, t;
   if(is_empty(pArr)){
      printf("This array is empty,can't inversion.\n");
      return;
   }
   i = 0;
   j = pArr->cnt - 1;
   while(i < j){
      t = pArr->pbase[i];
      pArr->pbase[i] = pArr->pbase[j];
      pArr->pbase[j] = t;
      i++;
      j--;
   }
   return;
}

Bool delete_arr(struct mArray *pArr, int pos, int *pval)
{
   int i, t;
   if(is_empty(pArr)){
      printf("This array is empty, can't delete element.\n");
      return False;
   }
   if(pos < 1 || pos > pArr->cnt){
      printf("Illegal pos, can't delete\n");
      return False;     
   }
   *pval = pArr->pbase[pos - 1];
   for(i = pos - 1; i < pArr->cnt - 1; i++){
      pArr->pbase[i] = pArr->pbase[i + 1];
   }
   pArr->cnt--;
   return True;
}

























