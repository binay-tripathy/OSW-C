#include <stdio.h>

void swap(int *p , int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	
}
void main(){
	int i, j;
	printf("Enter 2 nos : ");
	scanf("%d %d", &i, &j);
	printf("The value before swapping : %d %d \n", i, j);
	swap(&i, &j);
	printf("The value after swapping : %d %d \n", i, j);
}
