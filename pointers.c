#include <stdio.h>
void main(){
	int a = 2;
	int *b = &a;
	printf("%p \n" , b);
	printf("%d \n" , *b);
}
