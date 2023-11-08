#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void main(){
	char s[] = "This is the way";
	char s1[20];
	int i = 0, count = 0;
	while(i<strlen(s)){
		if(isspace(s[i])){
			strncpy(s1, &s[i-count], count);
			count = 0;
			printf("%s \n", s1);
			i++;
		}
		else{
			
//			printf("%c", s[i]);
			count++;
			i++;
		} 
	}
//	strncpy(s1, &s[i], 5);
	//		count = 0;
//		printf("%d", count);
}
