# include <stdio.h>
void main(){
	float radius, pi = 3.14159;
	printf("Enter the radius of the circle : ");
	scanf("%f" , &radius);
	float circumference = 2 * pi * radius;
	float area = pi * radius * radius;
//	printf("Circumference : %f" , circumference);
//	printf("Area : %f" , area);
	printf("Area = %f and Circumference = %f" , area, circumference);
}
