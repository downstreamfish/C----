/*1.2.3....n，求和
 * 可以使用高斯的公式：sum = n*(n + 1) / 2
 * 避免使用循环，增加计算步骤
 */
#include <stdio.h>

int main(void)
{
   int n;
   long int sum;
   printf("请输入要加到的数(1+2+3...n):");
   scanf("%d", &n);
   sum = n*(n + 1) / 2;
   printf("1 + 2 + 3 +... + %d = %ld\n", n , sum);
   return 0;
}
