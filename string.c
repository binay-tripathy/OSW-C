#include <stdio.h>
#include <string.h>

void main(){
	char a[50];
	printf("Enter the name : ");
	scanf("%s" , a);
	printf("%s \n", a);
	printf("%ld \n", sizeof(a));
	printf("%ld \n", strlen(a));
//	printf("%ld", sizeof(char));
//for(int i = 0; i<5; i++)
//	printf("%c" , a[i]);
//
}
