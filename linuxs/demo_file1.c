#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 80


int main(void)
{
   FILE * outfile;
   char filename[] = "test.dat";
   char buffer[SIZE];

   if((outfile = fopen(filename, "w+")) == NULL){
      fprintf(stderr, "ERROR, OPEN FILE FAILED\n");
      exit(EXIT_FAILURE);
   }
   while(strcmp(buffer, "quit") != 0){
      gets(buffer);
      fprintf(outfile,"%s\n", buffer);
   }

   fclose(outfile);
   return 0;
}
