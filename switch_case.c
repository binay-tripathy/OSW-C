# include <stdio.h>
void main(){
	int i;
	for(i = 1; i<=30; i++){
		switch(i){
			case 1: i+=5;
			case 2: i+=4;
			case 3: i+=5;
			default : i+=3;
			break;
		}
		printf("%d \n", i);
	}
}
