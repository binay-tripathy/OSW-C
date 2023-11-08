#include <stdio.h>
#include <string.h>

void main(){
	char arr [26];
//	scanf("%[^9]", arr);
	
	fgets(arr, 26, stdin);
	for(int i = 0; i<strlen(arr); i++){
		if(arr[i] == '9')
			break;
		putchar(arr[i]);
	}
//	puts(arr);
}
