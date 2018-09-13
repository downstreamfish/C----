/*
 * 用一个数组存储班级同学的成绩, 并利用函数求得平均分,,最高分,最低分
 */
#include <stdio.h>

#define LEN 10

void deal_score(int array_score[]);

void deal_score(int array_score[])
{
   int high_score = array_score[0];
   int low_score = array_score[0];
   int sum = 0;
   int i;
   for(i = 0; i < LEN; i++){
      if(high_score < array_score[i]){
         high_score = array_score[i];
      }
      if(low_score > array_score[i]){
	 low_score = array_score[i];
      }
      sum += array_score[i];
   }

   printf("high_score:%d\nlow_score:%d\naverge_score: %.2f\n", high_score, low_score, (float)sum / LEN);
}

int main(void)
{
   int array_score[LEN] = {88, 55, 77, 99, 57, 87, 67, 56, 78, 87};
   deal_score(array_score);
   return 0;
}
