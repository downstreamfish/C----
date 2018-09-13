#include <stdio.h>
#include <stdlib.h>
#include "library.h"
void createLibrary(PBOOK library)
{
   char ch;
   library = (PBOOK)malloc(sizeof(BOOK));
   if(NULL == library){
      printf("内存分配失败，创建失败。");
      exit(EXIT_FAILURE);
   }
   PBOOK ptail = library;
   while(1){
     printf("现在输入书本信息吗(Y/N): ");
      do{
         ch = getchar();
      }while(ch != 'Y' && ch != 'N');
      if(ch == 'Y'){
	 PBOOK book = (PBOOK)malloc(sizeof(BOOK));
	 if(NULL == library){
	      printf("内存分配失败，创建失败。");
	      exit(EXIT_FAILURE);
	 }
	 printf("请输入书名: ");
         scanf("%s",book->name);
         printf("请输入作者: ");
         scanf("%s",book->author);
         
	 ptail->next = book;
	 book->next = NULL;
	 ptail = book;
      }else{
         break;
      }
   }
}
/* to do */
void add(PBOOK library)
{
   char name[100], author[100];
   PBOOK book = (PBOOK)malloc(sizeof(BOOK));
   if(NULL == book){
      printf("书本信息录入失败，程序终止");
      exit(EXIT_FAILURE);
   }
   printf("请输入书名: ");
   scanf("%s", name);
   printf("请输入作者: ");
   scanf("%s", author);

}

void printLibrary(PBOOK library)
{
   int cnt = 1;
   PBOOK book = library->next;
   while(book != NULL){
      printf("书籍%d ",cnt);
      printf("的名字是：%s，", book->name);
      printf("作者是：%s\n", book->author);
      book = book->next;
   }
}

void releaseLibrary(PBOOK library)
{
   PBOOK book = library;
   while(library != NULL){
      free(book);
      book = library->next;
   }
}

