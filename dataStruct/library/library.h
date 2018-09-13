#ifndef LIBRARY_H
#define LIBRARY_H

typedef struct Book{
   char name[100];
   char author[100];
   struct Book * next;
}BOOK, *PBOOK;
PBOOK createLibrary();
_Bool addBook(PBOOK);
void printLibrary(PBOOK);
void printBook(PBOOK);
void releaseLibrary(PBOOK);
#endif
