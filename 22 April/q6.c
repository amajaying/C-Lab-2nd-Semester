//using for loop make a square of 1 2 and 3
#include<stdio.h>
int main(){
	for(int i = 1; i<=5; i++){
		for(int j = 1; j<=5; j++){
			if(i==1 || i==5 || j==1 || j==5)
				printf("1");
			else if(i==2 || i ==4 || j==2 || j==4)
				printf("2");
			else
				printf("3");	
			}
			printf("\n");
		}
		
}
