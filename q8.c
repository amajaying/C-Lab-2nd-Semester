//factorial of n 
#include<stdio.h>
int main(){
	int n;
	int sum = 1;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>=1){
		sum = sum * n;
		n--;
	}
	printf("sum is: %d",sum);
	}
