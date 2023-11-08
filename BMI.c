#include <stdio.h>
void main(){
	float height, weight, BMI;
	printf("Enter the height : ");
	scanf("%f", &height);
	printf("Enter the weight : ");
	scanf("%f", &weight);
	BMI = (703 * weight)/(height*height);
//	switch(BMI){
//		case(BMI<18.5): printf("Underweight"); break;
//		case(BMI>18.5 && BMI< 24.9): printf("Normal"); break;
//		case(BMI>25.0 && BMI< 29.9): printf("Overweight"); break;
//		case(BMI> 30.0): printf("Obese"); break;
//	}
	if(BMI<18.5)
		printf("Underweight \n");
	else if (BMI>18.5 && BMI< 24.9)
		printf("Normal \n");
	else if (BMI>25.0 && BMI< 29.9)
		printf("Overweight \n");
	else if(BMI> 30.0)
		printf("Obese \n");
}
