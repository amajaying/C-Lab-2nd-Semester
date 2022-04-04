//display numbers from 1 to 100 and 100 to 1 

#include<stdio.h>
int main(){
	//printing 1 to 100
	int a = 1; 
	printf("Printing from 1 to 100: \n");
	while (a<=100){
		printf("%d ",a);
		a++;
	}
	
	//printing 100 to 1
	a = 100;
	printf("\n\nPrinting from 100 to 1: \n");
	while (a>=1){
		printf("%d ",a);
		a--;
	}
}
