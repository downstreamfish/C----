#include <stdio.h>

int get_input(void);
void print_message(int, int);

int main(void)
{
   int counter;
   int input;

   for(counter = 0; counter <= 200; counter++){
      input = get_input();
      if(input == -1){
         break;
      }
      print_message(counter, input);
   }

   return 0;
}

int get_input()
{
   int input;
   
   printf("Enter an integer, or use -1 to exit: ");
   scanf("%d", &input);
   return input;
}

void print_message(int counter, int input)
{
   static int last_num = 0;
   counter++;
   printf("For number %d, you entered %d(%d more than last time)\n",
	  counter, input, input - last_num);
   last_num = input;

}
