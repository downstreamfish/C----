#include <stdio.h>
#include <stdlib.h>
struct Book{
   char name[100];
   char author[100];
   struct Book * next;
};
void getInput(struct Book*);
void addBook(struct Book**);
void printBook(struct Book *);
void releaselibrary(struct Book*);
int main(void)
{
   char ch;
   struct Book *library = NULL;
   while(1){
      printf("现在要输入书籍信息吗(Y/N): ");
      do{
//	 scanf("%c", &ch);
         ch = getchar();
      }while(ch != 'Y' && ch != 'N');
      if(ch == 'Y'){
         addBook(&library);
      }else{
         break;
      }
   }
   printBook(library);
   releaselibrary(library);
   return 0;
}

void addBook(struct Book **library)
{
   struct Book *book;
   static struct Book *ptail;  //静态变量，程序生存周期
   book = (struct Book *)malloc(sizeof(struct Book));
   if(NULL == book){
      printf("内存分配失败，程序终止");
      exit(EXIT_FAILURE);
   }
   getInput(book);
   if(*library != NULL){
      
      ptail->next = book;
      book->next = NULL;
   }else{
      *library = book;
      book->next = NULL;
   }
   ptail = book;
}

void getInput(struct Book *book)
{
   printf("请输入书籍名字：");
   scanf("%s", book->name);
   printf("请输入书籍作者：");
   scanf("%s", book->author);
}
void printBook(struct Book *book)
{
   int cnt = 1;
   struct Book * tmp = book;
   while(tmp != NULL){
      printf("书籍%d", cnt);
      printf(" 的名字是：%s", tmp->name);
      printf(", 作者是：%s\n", tmp->author);
      tmp = tmp->next;
      cnt++;
   }
}

void releaselibrary(struct Book * library)
{
   struct Book *book;
   while(library != NULL){
      book = library;
      library = library->next;
      free(book);
   }
}
