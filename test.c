#include <stdio.h>
#include <string.h>
//int global = 5;
//int global1 = 5;
//int global2 = 5;
//int array_local[5];
//int* set_array(int value){
//	static int array_local[5];
//	int i;
//	for(i = 0; i<5; i++)
//		array_local[i] = value;
//	return array_local;
//
//}


//int f(int *a, int n){
//	if(n<=0)
//		return 0;
//	else if(*a %2 == 0)
//		return *a + f(a+1,n-1);
//	else 
//		return *a - f(a+1,n-1);
//}

//void printlength(char *s, char *t){
//	unsigned int c = 5;
//	unsigned int b = 2;
//	int len = ((strlen(s)-strlen(t)) > c ? strlen(s) : strlen(t));
//	printf("%d \n", len);
//}


int main(){
//	int a = 2, b = 28, c = 100, d = 400, e = 58763, f = 670000;
//	scanf("%d" , &num1);
//	scanf("%d" , &num2);
//	float result = (num1/(float)num2);
//	printf("%-6d \n" , a);
//	printf("%-6d \n" , b);
//	printf("%-6d \n" , c);
//	printf("%-6d \n" , d);
//	printf("%-6d \n" , e);
//	printf("%-6d \n" , f);
	
//
//	float a = 8.358416, b = 35.434565, c = 134.456576, d = 2654.453456;
//	printf("%0.2f \n" , a);
//	printf("%.2f \n" , b);
//	printf("%5.2f \n" , c);
//	printf("%0.3f \n" , d);

//	int num = 0;
//	while(num<7){
//		int num2 = pow(2,num);
//		printf("%d %d \n" , num , num2); 
//		num++;
//	}

//	static int i = 5;
//	if(--i){
//		main();
//		printf("%d"  , i);
//	}
	

//	short a = 320;
//	char *ptr;
//	ptr = (char*) &a;
//	printf("%d" , *ptr);	
	
//	int a[] = {20,15,17,40,13,19};
//	int *result = set_array(4);
//	for(int i = 0; i<5; i++)
//		printf("%d", result[i]);	
//	printf("%d" , f(a,6));		









//	float a = 1.7;
//	if(a<1.7)
//		printf("C\n");
//	else
//		printf("U\n");
	
	
//	int a = {1,2,3};
//	printf("%d",a);


	
//	int a[] = {2,4,6,8,10};
//	int i, sum = 0, *b= a+4;
//	for(i = 0; i<5; i++)
//		sum= sum + (*b-i) - *(b-i);
//	printf("%d \n", sum);
		
	
//	int a[] = {10,20,30,40,50,60};
//	int *b[] = {a+3,a+2,a+4,a, a+5,a+1};
//	int **c = b;
//	*c++;
//	printf("%ld %ld %d \n", c-b, *c-a, **c);
//	*++c;
//	printf("%ld %ld %d \n", c-b, *c-a, **c);
//	*++*c;
//	printf("%ld %ld %d \n", c-b, *c-a, **c);
//	++*++c;
//	printf("%ld %ld %d \n", c-b, *c-a, **c);
	
//	char a[9];
//	char *b = "go to";
//	int length = strlen(b);
//	for(int i = 0; i<length; i++)
//		a[i] = b[i];
//	printf("%s", a);


//	char *a[] = {"papa", "chacha","chachi","stupid","gotohell", "nonsense"};
//	char **b[] = {a+2,a+3,a+1,a,a+5,a+4};
//	char ***c = b;
//	*++*++c;
//	printf("%s \n", **(c+2)+3);
//	printf("%s \n", *++*++c+1);
//	printf("%c \n", *++**++c+2);


	
//	char *x = "abc";
//	char *y = "defgh";
//	printlength(x,y);	
	
	
	
	
//	int m  = 10;
//	int n , n1;
//	n = ++m;
//	n1 = m++;
//	n--;
//	--n1;
//	n-=n1;
//	printf("%d \n", n);





//	struct info {char name[30]; int roll; char grade;};
//	struct info a[2];
//	for(int i = 0; i<2; i++){
//		printf("Name : ");
//		scanf("%s", a[i].name);		
//		printf("Roll : ");
///		scanf("%d", &a[i].roll);
//		printf("Grade : ");
//		scanf(" %c", &a[i].grade);
//	}
//	
//	printf("\n \n");
//	for(int i = 0; i<2; i++){
//		printf("Name : %s \n", a[i].name);
//		printf("Roll No : %d \n", a[i].roll);
//		printf("Grade : %c \n", a[i].grade);
//	}


		
	char str1[30];
	fgets(str1, sizeof(str1), stdin);
	for(int i = strlen(str1)-1; i>=0; i--)
		printf("%c \n", str1[i]);

	return 0;
}

