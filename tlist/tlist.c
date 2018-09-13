#include <stdio.h>
#include "mlist.h"
int main(void)
{
    PNODE phead = NULL;
	 int input;
	 while(1){
        printf("请输入一个整数(输入-1表示结束)：");
		  scanf("%d", &input);
		  if(-1 == input){
            break;
		  }
		  insertNode(&phead, input);
		  printNode(phead);
	 }
}
