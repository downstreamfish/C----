/*
 * 快速排序来给数组排序
 */
#include <stdio.h>
int findpos(int arr[], int first, int last);
void quicksort(int arr[], int begin, int end);
int main()
{
   int arr[] = {73, 108, 11, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
   int length = sizeof(arr)/sizeof(arr[0]);
   quicksort(arr, 0, length - 1);
   for(int i = 0; i < length; i++){
      printf("%d ", arr[i]);
   }
   printf("\n");
   return 0;
}

void quicksort(int arr[], int begin, int end)
{
   int pos;
   if(begin < end){
      pos = findpos(arr, begin, end);
      quicksort(arr, begin, pos - 1);
      quicksort(arr, pos + 1, end);
   }
}

int findpos(int arr[], int first, int last)
{
   int tmp = arr[first];
   while(first < last){
      while(first < last && arr[last] >= tmp){
	 last--;
      }
      arr[first] = arr[last];
      while(arr[first] <= tmp && first < last){
	 first++;
      }
      arr[last] = arr[first];
   }
   arr[last] = tmp;
   return last;
}
