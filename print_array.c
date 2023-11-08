#include <stdio.h>
void main(){
	int arr [] = {8,12,18,25,24,30,28,22,23,10};
	printf("n \t %% of total \n");
	float sum = 0.0;
	for(int i = 0; i<10; i++){
		sum+=arr[i];
	}
	for(int j = 0; j<10; j++){
		printf("%-8d %5.2f \n", arr[j], ((arr[j]/sum)*100));
	}
	
	printf("%%%d \n", 4);
	
}
