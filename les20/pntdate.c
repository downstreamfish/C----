#include <stdio.h>
#include <stdlib.h>

typedef unsigned char BYTE;
typedef unsigned int WORD;

struct file_date{
   unsigned int day: 5, month: 4, year: 7;
};

union int_date{
   unsigned int i;
   struct file_date fd;
};
union{
   struct {
      WORD ax, bx, cx, dx;
   }word;
   struct {
      BYTE al, ah, bl, bh, cl, ch, dl, dh;
   }byte;
}regs;
void print_date(unsigned int n);

int main()
{
   
   unsigned int n;
   n = 2000;
   regs.byte.al = 0x34;
   regs.byte.ah = 0x12;
   printf("AX: %x\n",regs.word.ax);
   print_date(n);
   return 0;
}

void print_date(unsigned int n)
{
   union int_date u;
   u.i = n;
   printf("%d-%d-%.2d\n", u.fd.month, u.fd.day, (u.fd.year + 1980) % 100);
}
