#include<stdio.h>


struct Date{
   int year;
   int month;
   int day;
};
struct Book{
   char name[50];
   char author[50];
   float price;
   struct Date date;
   char public[50];
};
void getBook(struct Book *);
void printBook(struct Book *);
int main()
{
   struct Book b1,b2;
   printf("请输入第一本书籍信息...\n");
   getBook(&b1);
   printf("请输入第二本书籍信息...\n");
   getBook(&b2);
   printf("第一本书籍信息是：\n");
   printBook(&b1);
   printf("第二本书籍信息是...\n");
   printBook(&b2);
   return 0;
}

void getBook(struct Book *book)
{
   printf("书籍的名字是：");
   scanf("%s", book->name);
   printf("书籍的作者是：");
   scanf("%s", book->author);
   printf("书籍的价格是：");
   scanf("%f", &(book->price));
   printf("书籍的出版日期是：");
   scanf("%d-%d-%d", &book->date.year, &book->date.month, &book->date.day);
   printf("出版社是：");
   scanf("%s", book->public);
}
void printBook(struct Book *book)
{
   printf("书籍的名称是：%s\n", book->name);
   printf("书籍的作者是：%s\n", book->author);
   printf("书籍的价格是：%.2f\n", book->price);
   printf("书籍的出版日期是：%d-%d-%d\n", book->date.year, book->date.month, book->date.day);
   printf("书籍的出版社是： %s\n", book->public);
}
