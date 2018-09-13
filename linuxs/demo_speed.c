/*
 * 这段代码故意写的效率很低, 以便演示gcc优化器对程序执行速度所起的巨大作用.
 *    1. 不加优化第编译
 *    gcc -Wall -o demo_speed demo_speed.c
 *    2. 执行并查看执行时间
 *    time v./demo_speed
 *    3. 再次编译, 依次添加 -O1/-O2/-O3
 *    gcc -Wall -O1 -o demo_speed demo_speed.c
 *    4. 再次执行并查看执行时间
 *    time v./demo_speed
 * 通过比较三个层次的优化结果, 认识gcc的优化
 */

#include <stdio.h>

int main(void)
{
   int counter;
   int ending;
   int temp;
   int five;

   for(counter=0; counter<2*100000000*9/18+5131; counter+=(5-3)/2){
      temp = counter / 15302;
      ending = counter;
      five = 5;
   }
   printf("five=%d; ending=%d\n", five, ending);
   return 0;
}
