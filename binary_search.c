#include <stdio.h>
int b_search(int arr[], int size, int n){
	int start = 0;
	int end = size-1;
//	int search = 0;
	int mid = (start+end)/2;
	while(end>=start){
		if(arr[mid] == n)
			return mid;
		else if(arr[mid] < n)
			start = mid+1;
		else
			end = mid-1;
		mid = (start+end)/2;
	}
	return -1;
	
}
void main(){
	int arr[5], n;
	printf("Enter a sorted array of 5 integers : ");
	for(int i = 0; i<5; i++)
		scanf("%d", &arr[i]);
	printf("Enter the no to be searched : ");
	scanf("%d", &n);
//	for(int i = 0; i<10; i++)
//		printf("%d ", arr[i]);
	int search = b_search(arr, 5, n);
	if(search != -1)
		printf("The index of %d  is %d " , n , search);
	else
		printf("The no %d cannot be found in the array" , n);
}
