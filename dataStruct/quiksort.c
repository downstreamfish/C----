#include <stdio.h>

void qsort(int arr[], int low, int high);
int findpost(int arr[], int low, int high);

int main()
{
   int i;
   int arr[] = {3, 6, 2, -1, 5, 9};
   qsort(arr, 0, 5);
   for(i = 0; i < 6; i++){
      printf("%d ", arr[i]);
   }
   printf("\n");
   return 0;
}

void qsort(int arr[], int low, int high)
{
   int post;
   if(low < high){
      post = findpost(arr, low, high);
      qsort(arr, low, post-1);
      qsort(arr, post + 1, high);
   }
}
int findpost(int arr[], int low, int high)
{
   int val = arr[low];
   while(low < high){
      while(low <high && val <= arr[high]){
         high--;
      }
      arr[low] = arr[high];
      while(low < high && val >= arr[low]){
         low++;
      }
      arr[high] = arr[low];
   }
   arr[low] = val;
   return low;
}
