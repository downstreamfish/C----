#include<stdio.h>
#include<stdbool.h>

int main()
{
   long long int ll;
   int i;
   bool flag = true;
   printf("Enter a number: ");
   scanf("%lld", &ll);
   for(i = 2; i < ll / 2; i++){
      if(ll % i == 0){
	 flag = false;
	 break;
      }
   }
   if(flag){
      printf("%lld is a prime\n", ll);
   }else{
      printf("%lld is not a prime.\n", ll);
   }
   printf("i = %d\n", i);
   return 0;
}
