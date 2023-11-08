# include <stdio.h>
# define miles_per_km 0.621371

void main(){
	double kms, miles;
	printf("Enter the kms : ");
	scanf("%lf", &kms);
	
	miles = kms * miles_per_km;
	
	printf("That equals %lf miles \n" , miles);
}
