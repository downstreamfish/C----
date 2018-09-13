#include <stdio.h>
#include "contact.h"
int main()
{
    int icmd;
    struct Person *head = NULL;
    printf("====================\n");
    printf("=插入新的联系人：1 =\n");
    printf("=查找已有联系人：2 =\n");
    printf("=更改已有联系人：3 =\n");
    printf("=删除已有联系人：4 =\n");
    printf("=显示当前联系人：5 =\n");
    printf("=退出通讯录程序：6 =\n");
    printf("====================\n");
   do{
        printf("请输入你想要的操作：");
        scanf("%d", &icmd);
 
        switch(icmd){
            case 1: addPersonTail(&head); break;
	    case 2: findPerson(head); break;
	    case 3: changePerson(head); break;
	    case 4: delPerson(&head); break;
	    case 5: displayContact(head); break;
	    default: break;
	}
    }while(icmd < 6 && icmd > 0);
    printf("退出通讯录程序\n");
    releaseContact(head);
    return 0;
}
