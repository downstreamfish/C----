/*验证位域占用空间*/
#include <stdio.h>
int main(void)
{
   struct defaultbit{
      unsigned int with;
      unsigned int height;
   };
   struct usebit{
      unsigned int bitwith: 1;
      unsigned int bitheight:1;
   };
   printf("sizeof defaultbit: %lu\n", sizeof(struct defaultbit));
   printf("sizeof usebit: %lu\n", sizeof(struct usebit));
   return 0;
}

