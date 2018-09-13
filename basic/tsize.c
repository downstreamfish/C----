#include <stdio.h>
int main()
{
   printf("sizeof(short int): %lu\n", sizeof(short));
   printf("sizeof(int): %lu\n", sizeof(int));
   printf("sizeof(long): %lu\n",sizeof(long));
   printf("sizeof(long long): %lu\n", sizeof(long long));
   printf("sizeof(char): %lu\n", sizeof(char));
   printf("sizeof(_Bool): %lu\n", sizeof(_Bool));
   printf("sizeof(float): %lu\n", sizeof(float));
   printf("sizeof(double): %lu\n",sizeof(double));
   printf("sizeof(long double): %lu\n", sizeof(long double));
   return 0;
}
