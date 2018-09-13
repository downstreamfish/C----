/*
 * 输入一个圆的半径,求出它的面积
 */

#include <stdio.h>

#define PI 3.1415926
#define area(r) PI * (r) * (r)

int main(void)
{
   float r, a;
   printf("Input r of circle: ");
   scanf("%f", &r);
   a = area(r);
   printf("The area is %f\n", a);

   return 0;
}
