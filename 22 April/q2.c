//display n to 1 using goto
#include<stdio.h>
int main(){
	int n; 
	printf("Enter a number: ");
	scanf("%d", &n);
	x:
	printf("%d ",n);
	n--;
	if(n>0)
		goto x;
	}
