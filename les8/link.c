#include <stdio.h>
#include <string.h>
struct job{
   int id;
   char name[6];
   struct job *next;
};

int main()
{
   struct job j1, j2, j3, *head, *p;
   j1.id = 1000;
   strcpy(j1.name, "san");
   j2.id = 1001;
   strcpy(j2.name, "si");
   j3.id = 1003;
   strcpy(j3.name, "liu");
   head = &j1;
   j1.next = &j2;
   j2.next = &j3;
   j3.next = NULL;
   p = head;
   while(p != NULL)
   {
      printf("%d, %s\n", p->id, p->name);
      p = p -> next;
   }
   return 0;
}
