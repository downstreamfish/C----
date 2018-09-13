#include <stdio.h>

int main(int argv, char *argc[])
{
    printf("argv is %d\n", argv);
    for(int i = 0; i < argv; i++)
    {
        printf("argc[%d] is: %s\n", i, argc[i]);
    }
    return 0;
}
