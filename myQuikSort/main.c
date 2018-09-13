#include <stdio.h>
#include <stdlib.h>

int median(int a[], int left, int right);
void swap(int *, int *);
void quicksort(int a[], int left, int right);

int main(int argc, char *argv[]) {
	int i;
	int arr[] = {2, 1, 4, 5, 0, 3, 6, 8, 7, 9};
	quicksort(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1);
	printf("sorted arr= ");
	for(i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}

void quicksort(int a[], int left, int right)
{
	int pivot = median(a, left, right);
	printf("pivot in quicksort is %d", pivot);
	int i = left, j = right - 1;
	for(;;){
		while(a[++i] < pivot){
			;
		}
		while(a[--j] > pivot){
			;
		}
		if(i < j){
			swap(&a[i], &a[j]);
		}else{
			break;
		}
	}
	swap(&a[i], &a[right -1]);
	quicksort(a, left, i - 1);
	quicksort(a, i + 1, right);
}

int median(int a[], int left, int right)
{
	int center = (left + right) / 2;
	if(a[left] > a[center]){
		swap(&a[left], &a[center]);
	}
	
	if(a[left] > a[right]){
		swap(&a[left], &a[right]);
	}
	if(a[center] > a[right]){
		swap(&a[center], &a[right]);
	}
	
	swap(&a[center], &a[right - 1]);
	return a[right - 1];
}

void swap(int *m, int *n)
{
	int t = *m;
	*m = *n;
	*n = t;
}
