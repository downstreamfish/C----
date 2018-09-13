#ifndef CONTACT_H
#define CONTACT_H

struct Person{
   char name[100];
   char tel[11];
   struct Person * next;
};

void addPerson(struct Person **);
void addPersonTail(struct Person **);
void findPerson(struct Person *);
void changePerson(struct Person *);
void delPerson(struct Person **);
void displayContact(struct Person*);
void releaseContact(struct Person*);
void printPerson(struct Person *);
#endif
