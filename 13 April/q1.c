//display 1 to 10 and 10 to 1 

#include<stdio.h>
int main(){
	int i;
	printf("From 1 to 10:\n");
	for(i = 1; i<=10; i++){
		printf("%d ",i);	
	}
	
	printf("\n\nFrom 10 to 1:\n");
	for(i = 10; i>=1; i--){
		printf("%d ",i);	
	}
	
	
}
