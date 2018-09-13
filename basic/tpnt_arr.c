#include <stdio.h>
int main()
{
   int i;
   char *parr[5] = {
      "Just do it -- NIKE",
      "one more thing... --APLE",
      "make believe --SONY",
      "make diffrence -- apple",
      "extend your vision --EPSON"
   };
   for(i = 0; i < 5; i++){
      printf("%s\n", parr[i]);
   }
   return 0;
}
