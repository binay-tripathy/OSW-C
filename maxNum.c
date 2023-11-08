# include <stdio.h>
void main(){
	int num1, num2, num3;
	printf("Enter 1st number");
	scanf("%d", &num1);
	printf("Enter 2nd number");
	scanf("%d", &num2);
	printf("Enter 3rd number");
	scanf("%d", &num3);
	if(num1>num2 && num1>num3){
		printf("The largest number is %d", num1);
	}
	else if(num2>num1 && num2>num3){
		printf("The largest number is %d", num2);
	}
//	if(num3>num1 && num3>num2){
	else{
		printf("The largest number is %d", num3);
	}
}
