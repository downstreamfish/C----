#include <stdio.h>
int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   char arr[n + 1];
   printf("Enter a char for array: ");
   getchar();
   for(int i = 0; i < n; i++){
      scanf("%c", &arr[i]);
   }
   arr[n] = '\0';
   printf("%s\n", arr);
   return 0;
}
