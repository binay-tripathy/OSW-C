#include <stdio.h>
int arr[2];
int *swap(int i, int j){
	arr[0] = i;
	arr[1] = j;
	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
	return arr; 
}

//int *swap(int arr[]){
//	int temp = arr[0];
//	arr[0] = arr[1];
//	arr[1] = temp;
//	return arr;
//}

void main(){
	int i , j;
	printf("Enter 1st no : " );
	scanf("%d" , &i);
	printf("Enter 2nd no : " );
	scanf("%d" , &j);
	printf("The original value is : %d %d \n" , i , j);

//	printf("Enter 2 num : " );
//	int arr[2];
//	for(int i = 0; i<2; i++){
//		arr[0] = scanf("%d" , &i);
//	}
	
	int *arr = swap(i, j);
//	arr = swap(arr);
	printf("The swaped value is : ");
	for(int x = 0; x<2; x++)
		printf("%d ", arr[x]);
	printf("\n");
}
