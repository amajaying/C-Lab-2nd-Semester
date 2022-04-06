//factorial of n 
#include<stdio.h>
int main(){
	int n;
	int fact = 1;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>=1){
		fact = fact * n;
		n--;
	}
	printf("Factorial is: %d",fact);
	}
