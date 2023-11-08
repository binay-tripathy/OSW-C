#include <stdio.h>
int leap (int year){
	if((year%4==0) || (year % 400 == 0))
		return 1;
	else
		return 0;	
}
void main(){
	int date, month, year, days = 0;
	printf("Enter the date, month and year");
	scanf("%d %d %d", &date, &month, &year);
	
	switch(month-1){
			case 11: days+=30;
			case 10: days+=31;
			case 9: days+=30;
			case 8: days+=31;
			case 7: days+=31;
			case 6: days+=30;
			case 5: days+=31;
			case 4: days+=30;
			case 3: days+=31;
			case 2: days+=28;
			case 1: days+=31;
	}
	int leapyear = leap(year);
	if(leapyear && month > 2)
		days++;

	days+=date;
	printf("No of days : %d \n", days);
}

