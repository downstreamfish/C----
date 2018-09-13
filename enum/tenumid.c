/*测试枚举类型的下标*/
#include <stdio.h>
int main(void)
{
   enum Color {red, blue, green = 10, dark, yellow};
   enum Color c;
   printf("red is %d \n", red);
   printf("blue is %d \n", blue);
   printf("green is %d\n", green);
   printf("dark is %d\n", dark);
   printf("yellow is %d\n ", yellow);
   return 0;
}
