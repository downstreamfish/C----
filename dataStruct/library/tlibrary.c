#include <stdio.h>
#include "library.h"
int main()
{
   PBOOK library;
   createLibrary(library);
   printLibrary(library);
   releaseLibrary(library);
   return 0;
}
