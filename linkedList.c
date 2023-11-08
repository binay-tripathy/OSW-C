#include <stdio.h>

struct node{ int data; struct node *next; };

void main(){
	struct node n1;
	struct node n2;
	struct node n3;
	
	n1.data = 12;
	n1.next = &n2;
	n2.data = 13;
	n2.next = &n3;
	n3.data = 14;
	n3.next = NULL;
	
	struct node *head = &n1;

	for(int i = 0; i<3; i++){
		printf("%d \n", head->data);
		head = head->next;
	}
	

	/*
	struct n = {struct node temp};
	int num;
	scanf("%d", &num);
	for(int i = 0; i<num; i++){
		
	}
	*/
	

}
