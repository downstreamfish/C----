#include <ctype.h>
#include <stdio.h>

int main()
{
   char *p;
   for(p = "aA0!"; *p != '\0'; p++){
      printf("'%c' to lower is '%c'; ", *p, tolower(*p));
      printf("'%c' to upper is '%c'\n", *p, toupper(*p));
   }
   return 0;
}
