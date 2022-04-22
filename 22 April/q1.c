// display n to 1 using do while
#include<stdio.h>
int main(){
	int n; 
	printf("Enter a number: ");
	scanf("%d", &n);
	do{
		printf("%d ", n);
		n--;
	}while(n>0);
}
