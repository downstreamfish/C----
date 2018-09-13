#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contact.h"
/*更改给出联系人电话，如果有，则更改，没有就显示没有此联系人*/
void changePerson(struct Person * head)
{
    struct Person *person;
    char pname[100];
    printf("请输入更改的联系人姓名：");
    scanf("%s", pname);
//    person = findpos(head, pname);
     person = head;
     while(person != NULL){
        if(!strcmp(person->name, pname)){
           break;
	}
	person = person->next;
     }
  
    if(NULL == person){
        printf("没有此联系人\n");
    }else{
        printf("请输入新的电话：");
	scanf("%s", person->tel);
    }
}
/*根据给出姓名，删除此联系人*/
void delPerson(struct Person ** head)
{
    struct Person *previous;
    struct Person * current;
    char pname[100];
    current = *head;
    previous = NULL;
    printf("请输入要删除的联系人姓名：");
    scanf("%s", pname);
    while(NULL != current){
       if(!(strcmp(current->name, pname))){
           break;
       }

       previous = current;
       current = current->next;
    }
    if(NULL == current){
       printf("没有此联系人\n");
       return;
    }else{
       if(NULL == previous){
           *head = current->next;
       }else{
           previous->next = current->next;
       }
       free(current);
    }
}

/*根据姓名查找是否含有此联系人*/
/*
struct Person * findpos(struct Person *head, char *pname)
{
     struct Person * person = head;
     while(person != NULL){
        if(!strcmp(person->name, pname)){
           break;
	}
	person = person->next;
     }
     return person;   
}
*/
/*
 *查找已有联系人，如果找到就打印，否则显示没有此联系人
 */
void findPerson(struct Person *head)
{
    struct Person *person;
    char pname[100];
    printf("请输入查找的联系人姓名：");
    scanf("%s", pname);
//    person = findpos(head, pname);
     person = head;
     while(person != NULL){
        if(!strcmp(person->name, pname)){
           break;
	}
	person = person->next;
     }
 
    if(NULL == person){
        printf("没有此联系人\n");
    }else{
        printPerson(person);
    }
}
void printPerson(struct Person *person)
{
    printf("%s的电话是: %s\n", person->name, person->tel);
}
/*在链表的头部插入联系人*/
void addPerson(struct Person **person)
{
    struct Person  *new, *tmp;
    new = malloc(sizeof(struct Person));
    if(NULL == new){
        printf("添加联系人失败，程序终止");
	exit(EXIT_FAILURE);
    }
    printf("请输入联系人的名字：");
    scanf("%s", new->name);
    printf("请输入联系人的电话：");
    scanf("%s", new->tel);
    if(NULL != *person){
        tmp = *person;
        *person = new;
	new->next = tmp;
    }else{
        *person = new;
	new->next = NULL;
    }
}
/*在链表的尾部插入联系人*/
void addPersonTail(struct Person **head)
{
    struct Person *person;
    static struct Person *ptail;
    person = (struct Person*)malloc(sizeof(struct Person));
    if(NULL == person){
        printf("添加联系人失败，程序终止。");
	exit(EXIT_FAILURE);
    }
    printf("请输入联系人名字：");
    scanf("%s", person->name);
    printf("请输入联系人电话：");
    scanf("%s", person->tel);
    if(NULL != *head){
        ptail->next = person;
        person->next = NULL;
    }else{
        *head = person;
	person->next = NULL;
    }
    ptail = person;
}
/*打印链表内的全部联系人*/
void displayContact(struct Person * head)
{
    struct Person * person;
    person = head;
    while(person != NULL){
        printf("联系人的名字：%s\n", person->name);
	printf("联系人的电话：%s\n", person->tel);
	person = person->next;
    }
}
/*释放链表的内存空间*/
void releaseContact(struct Person * head)
{
    struct Person * person;
    while(head != NULL){
        person = head;
	head = head->next;
	free(person);
    }
}


