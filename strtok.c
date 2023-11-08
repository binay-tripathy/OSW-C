#include <stdio.h>
#include <string.h>
void main(){
//	char s[] = "This is the way";
char s[30];
fgets(s, sizeof(s), stdin);
	char d[] = " ";
	char *portion;
	portion = strtok(s, d);	
	int count = 0;
	while(portion != NULL){
//			printf("%s \n", portion);
			count++;
			portion = strtok(NULL, d);
	}
	printf("The no of words are : %d", count);
	
}
