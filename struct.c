#include <stdio.h>

void main(){
//	struct var { int a; float b; char c;};
//	struct var d = {10, 20.5, 'a'};
//	printf("%d \n" , d.a);
//	
//	struct var *e = &d;
//	printf("%p \n", e);
//	printf("%d \n", (*e).a);
//	printf("%f \n", e->b);



	struct s1 { int a; float b; char c;};
	struct s2 { int d; struct s1 e; float f;};
	int y;
	scanf("%d", &y);
	struct s2 g = { 10 , {y, 13.5, 'a'}, 40.5};
	printf("%d \n" , g.e.a);
	printf("%d \n" , g.d);
	
	struct s2 *x = &g;
	printf("%p \n", x);
	printf("%d \n", x->e.a);
	printf("%d \n", x->d);
	
}
