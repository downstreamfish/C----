#include <stdio.h>
#include "library.h"
int main()
{
   PBOOK library;
   library = createLibrary();
   printLibrary(library);
	addBook(library);
	printLibrary(library);

   releaseLibrary(library);
   return 0;
}
