#include <stdio.h>

int f(int *a, int n){
	if(n<=0)
		return 0;
	else if(*a%2==0)
		return *a+f(a+1,n-1);
	else
		return *a-f(a+1,n-1);
}
void main(){
	int a[]={20,15,17,40,13,19};
	printf("%d",f(a,6));
}
