#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include <stdbool.h>
#include <string.h>
PBOOK createLibrary()
{
   int i, len;
   char pname[100], pauthor[100];
   printf("请输入要录入的书本数量: ");
   scanf("%d", &len);
   PBOOK library = (PBOOK)malloc(sizeof(BOOK));
   if(NULL == library){
      printf("内存分配失败，创建失败。");
      exit(EXIT_FAILURE);
   }
   PBOOK ptail = library;
   ptail->next = NULL;
   for(i = 0; i < len; i++){
	printf("请输入书名: ");
	scanf("%s", pname);
	printf("请输入作者: ");
	scanf("%s", pauthor);
        PBOOK book = malloc(sizeof(BOOK));
	if(NULL == book){
	    printf("添加书籍失败，程序终止");
	    exit(EXIT_FAILURE);
	}
	strcpy(book->name, pname);
	strcpy(book->author, pauthor);
	ptail->next = book;
	book->next = NULL;
	ptail = book;
   }
   return library;
}
/* to do */
_Bool addBook(PBOOK library)
{
   int pos, i = 0;
   PBOOK pb = library;
   printf("请输入要放入的位置: ");
   scanf("%d", &pos);
   while (NULL != pb && i < pos - 1)
   {
	   i++;
	   pb = pb->next;
   }
   if(i > pos - 1 || NULL == pb){
	return false;
   }
   char pname[100], pauthor[100];
   PBOOK book = (PBOOK)malloc(sizeof(BOOK));
   if(NULL == book){
      printf("书本信息录入失败，程序终止");
      exit(EXIT_FAILURE);
   }
   printf("请输入书名: ");
   scanf("%s", pname);
   printf("请输入作者: ");
   scanf("%s", pauthor);
   strcpy(book->name, pname);
   strcpy(book->author, pauthor);
   book->next = pb->next;
   pb->next = book;
   return true;
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
      cnt++;
   }
}

void releaseLibrary(PBOOK library)

{
   PBOOK book;
   while(library != NULL){
      book = library;
      free(book);
      library = library->next;
   }
}

