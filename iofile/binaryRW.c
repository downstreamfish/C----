/*以二进制格式写入的读取结构体*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Date{
   int year;
   int month;
   int day;
};
typedef struct Book{
   char title[100];
   char author[100];
   struct Date date;
   char publish[100];
}BOOK, *PBOOK;

int main(void)
{
   PBOOK book_for_write, book_for_read;
   FILE *fp;

   book_for_write = (PBOOK)malloc(sizeof(BOOK));
   book_for_read = (PBOOK)malloc(sizeof(BOOK));
   if(NULL == book_for_write || NULL == book_for_read){
      printf("内存分配失败\n");
      exit(EXIT_FAILURE);
   }
   strcpy(book_for_write->title, "红楼梦");
   strcpy(book_for_write->author, "曹雪芹");
   strcpy(book_for_write->publish, "古籍出版社");
   book_for_write->date.year = 2018;
   book_for_write->date.month = 4;
   book_for_write->date.day = 20;

   if(NULL == (fp = fopen("file.txt","w"))){
      printf("打开文件失败\n");
      exit(EXIT_FAILURE);
   }
   fwrite(book_for_write, sizeof(BOOK), 1, fp);
   fclose(fp);
   
   if(NULL == (fp = fopen("file.txt","rb"))){
      printf("打开文件失败\n");
      exit(EXIT_FAILURE);
   }
   fread(book_for_read, sizeof(BOOK), 1, fp);
   printf("书名: %s\n", book_for_read->title);
   printf("作者: %s\n", book_for_read->author);
   printf("出版日期: %d-%d-%d\n", book_for_read->date.year, book_for_read->date.month, book_for_read->date.day);
   printf("出版社: %s\n", book_for_read->publish);
   fclose(fp);
   return 0;
}
