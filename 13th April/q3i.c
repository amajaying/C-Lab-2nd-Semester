//printing * in a triangle
#include<stdio.h>
int main(){
	int n; 
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(int i = n; i>=1; i=i-2){
		
		for(int j = 1; j <= n-
		i; j++){
			printf(" ");
		}
		for(int j = 1; j<=i; j++){
		printf("* ");
		}
		printf("\n");
	}
	}
