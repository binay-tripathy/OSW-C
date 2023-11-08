#include <stdio.h>

int *swap(int arr[]){
	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
	return arr; 
}

void main(){
	int i , j;
	printf("Enter 1st no : " );
	scanf("%d" , &i);
	printf("Enter 2nd no : " );
	scanf("%d" , &j);
	int arr[] = {i,j};
	printf("The original value is : ");
	for(int x = 0; x<2; x++)
		printf("%d ", arr[x]);
	printf("\n");
	swap(arr);
	printf("The swaped value is : ");
	for(int x = 0; x<2; x++)
		printf("%d ", arr[x]);
	printf("\n");
}
