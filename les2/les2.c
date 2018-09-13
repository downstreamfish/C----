#include <stdio.h>
#include "max.h"
#include "min.h"

int main()
{
    int m = 82;
    int n = 43;
    
    printf("The max number is: %d\n", max(m, n));
    printf("The min number is: %d\n", min(m, n));
    return 0;
}
