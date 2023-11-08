#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* lowercase(char* str){
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i]>= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return str;
}

void main(){
	char pres[] = "Adams, John, Quincy";
//	char d[] = ", ";
//	char *portion;
//	portion = strtok(pres, d);	
//	while(portion != NULL){
//			printf("%s \n", portion);
//			portion = strtok(NULL, d);
//	}	

	
//	char s1[20] = "Jupiterasdfhgjklw";
//	char s2[20] = "Symphony";
//	if(strlen(s1)+strlen(s2) < sizeof(s1)){
//		strcat(s1, s2);
//	}
//	else{
//		strncat(s1,s2, sizeof(s1)-strlen(s1)-1);
//		s1[sizeof(s1)-1] = '\0';
//	}
//	printf("%s", s1);


//	char str1[] = "HeLlo WoRld";
//	char str2[sizeof(str1)];
//	int i = 0;
//	while(i<strlen(str1)){
//		if(str1[i]>=65 && str1[i] <= 90){
//		char ch = str1[i]+32;
//			strncat(str2, &ch, 1);	
//			}
//		else{
//			char ch = str1[i];
///			strncat(str2, &ch, 1);
//			}
//		i++;
//	}
//	printf("%s", str2);






//	char str1[] = "Binay";
//	char str2[] = "Arpitam";


//	char str1[30];
//	char str2[30];
//	fgets(str1, sizeof(str1), stdin);
//	fgets(str2, sizeof(str2), stdin);
//	lowercase(str1);
//	lowercase(str2);
//	for(int i = 0; i< strlen(str1); i++){
//		char result = tolower(str1[i]);
//		str1[i] = result;
//		}
//	if(strcmp(str1, str2) == 0)
//		printf("Both are same");
//	else if(strcmp(str1, str2) < 0)
//		printf("Name1 is smaller");		
//	else 
//	printf("Name2 is smaller");		


 char first[] = "John";
 char last[] = "Adams";
 
 strncpy(first, pres, 2);
first[2] = '\0';
printf("%s\n", first);
printf(" %s\n", strcpy(last, &pres[7]));
strncpy(first, &pres[7], 2);
first[2] = '\0';
strncpy(last, &pres[14], 2);
last[2] = '\0';
printf(" %s%s\n", first, last);		

}

