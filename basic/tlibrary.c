#include<stdio.h>
#include<stdlib.h>
struct Book{
   char name[50];
   char author[50];
   struct Book *next;
};
void addBook(struct Book**);
void getInput(struct Book*);
void printlibrary(struct Book*);
void releaselibrary(struct Book *);

int main(void)
{
   struct Book *library;
   char ch;
   while(1){
      printf("现在输入书籍吗(Y/N): ");
      do{
	 ch = getchar();
      }while(ch != 'Y' && ch != 'N');
      if(ch == 'Y'){
	 addBook(&library);
      }else{
	 break;
      }
   }
   printf("现在要输出书籍吗(Y/N): ");
   do{
      ch = getchar();
   }while(ch != 'Y' && ch != 'N');
   if(ch == 'Y'){
      printlibrary(library);
   }
   releaselibrary(library);
   return 0;
}

void addBook(struct Book ** library)
{
   struct Book * book, *tmp;
   book = (struct Book *)malloc(sizeof(struct Book));
   if(NULL == book){
      printf("内存分配失败！程序终止。");
      exit(EXIT_FAILURE);
   }
   getInput(book);
   if(NULL != *library){
      tmp = *library;
      *library = book;
      book->next = tmp;
   }else{
      *library = book;
      book->next = NULL;
   }
}

void getInput(struct Book *book)
{
   printf("请输入书名：");
   scanf("%s", book->name);
   printf("请输入作者：");
   scanf("%s", book->name);
}

void printlibrary(struct Book *library)
{
   int cnt = 1;
   struct Book * book = library;
   while(book->next != NULL){
      printf("书籍 %d 的名字是：%s, 作者是 %s\n", cnt, book->name, book->author);
      book = book->next;
      cnt++;
   }
}

void releaselibrary(struct Book *library)
{
   struct Book *book = library;
   while(library != NULL){
      free(book);
      book = library->next;
      library = library->next;
   }
}











