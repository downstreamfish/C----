#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATASIZE 10

typedef struct stringdata{
   char *string;
   int iscontinuing;
   struct stringdata *next;
}mydata;

mydata *append(mydata *start, char *input);
void displaydata(mydata *start);
void freedata(mydata *start);

int main(void)
{
   char input[DATASIZE];
   mydata * start = NULL;
   
   printf("ENTER SOME DATA, AND PRESS Ctrl + D WHEN DONE.\n");
   while(fgets(input, sizeof(input), stdin)){
      start = append(start, input);
   }

   displaydata(start);
   freedata(start);

   return 0;
}

mydata *append(mydata *start, char *input)
{
   mydata *cur = start, *prev = NULL, *new;

   while(cur != NULL){
      prev = cur;
      cur = cur->next;
   }

   cur = prev;
   new = malloc(sizeof(mydata));
   if(new == NULL){
      printf("COULED NOT ALLOCATE MEMORY\n");
      exit(EXIT_FAILURE);
   }
   if(cur != NULL){
      cur->next = new; 
   }else{
      start = new;
   }
   strcpy(cur->string, input);
   new->next = NULL;
   return start;
}

void displaydata(mydata* start)
{
   mydata *cur;
   int line_cnt, struct_cnt;
   int newline = 1;

   cur = start;
   while(cur != NULL){
      if(newline){
         printf("Line %d: ", ++line_cnt);
      }
      struct_cnt++;
      printf("%s", cur->string);
      newline = !cur->iscontinuing;
      cur = cur->next;
   }
   printf("This data contained %d lines and was stored in %d structure.\n",
	 line_cnt, struct_cnt);
}

void freedata(mydata *start)
{
   mydata *cur = start, *next = NULL;
   while(cur){
      next = cur->next;
      free(cur);
      cur = next;
   }
}
