/*
 *利用枚举和localtime实现
 * 获取当前的日期（0-6），通过和枚举类型进行比较，得出当天休息或工作
 * struct tm*localtime(const time_t *timer)
 * 函数返回指向tm结构的指针，struct tm结构包含t_wday,用0-6表示一周。
 */
#include<stdio.h>
#include <time.h>
int main(void)
{
   enum Week{sun, mon, tue, wed, thu, fri, sat};
   enum Week day;
   time_t t;
   struct tm* w = localtime(&t) ;
   day = w->tm_wday;
   switch(day){
      case mon:
      case tue:
      case wed:
      case thu:
      case fri: printf("work day T_T\n");break;
      case sat:
      case sun: printf("holiday ^_^\n"); break;
      default:break;
   }
   return 0;
}
