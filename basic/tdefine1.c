/*
 * 测试无参数的宏定义
 */
#include <stdio.h>
#define R  6371
#define PI 3.14
#define V PI * R * R * R * 4 / 3

int main(void)
{
   /*
   printf("请输入圆的半径: ");
   scanf("%f", &r);
   float s = PI * r * r;
   printf("圆的面积是: %.2f\n", s);
   */
   printf("地球的体积大约是： %.2f\n", V);
   return 0;
}
