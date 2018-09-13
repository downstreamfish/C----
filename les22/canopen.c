#include <stdio.h>

int main(int argc, char * argv[])
{  int i = 1;
   FILE * fp;
   if(argc != 2){
      printf("usage: canopen filename!\n");
      return 2;
   }
   if((fp = fopen(argv[1], "r")) == NULL){
      printf("%s can't be opened!\n", argv[1]);
      return 1;
   }
   printf("%s can be opened!\n", argv[1]);
   fclose(fp);
   i = rename(argv[1],"newmst.dat");
   if(i == 0){
      remove("newmst.dat");
      printf("removed\n");
   }
   return 0;
}
