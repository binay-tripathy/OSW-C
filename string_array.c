#include <stdio.h>
#include <string.h>

void main(){
//	char arr[12][10];
//	arr[0][0] = "January";	
	char *arr[12];
	for(int i = 0; i<12; i++)
		scanf("%s", arr[i]);
		
	printf("\n\nThe months are : \n");
	for(int i = 0; i<12; i++)
		printf("%s \n", arr[i]);
}
