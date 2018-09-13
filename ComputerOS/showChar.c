#include <stdio.h>

typedef char* show_charactor;

void show_byte(show_charactor start, int len)
{
    int i;
    for (i = 0; i < len; i++){
        printf("%2x ", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_byte((show_charactor) &x, sizeof(int));
}
void show_float(float f)
{
    show_byte((show_charactor) &f, sizeof(float));
}

void show_pointer(void * p)
{
    show_byte((show_charactor)p, sizeof(void *));
}

int main()
{
    int x = 0x1234;
    float f = 0xABCD;
    float* pf = &f;
    show_int(x);
    show_float(f);
    show_pointer(pf);
    return 0;
}