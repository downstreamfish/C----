/*按位& | ^ 操作*/
#include <stdio.h>

int main(void)
{
    unsigned int mask = 0xFF;
    unsigned int v1 = 0xABCDEF;
    unsigned int v2 = 0xABCDEF;
    unsigned int v3 = 0xABCDEF;
    v1 &= mask;
    v2 |= mask;
    v3 ^= mask;
    printf("v1 &= mask: 0x%X\n", v1);
    printf("v2 &= mask: 0x%X\n", v2);
    printf("v3 &= mask: 0x%X\n", v3);
    return 0;
}
