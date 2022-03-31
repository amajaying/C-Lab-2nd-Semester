//printing * in 5 lines as a triangle

#include<stdio.h>
int main(){
	int n; 
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=i; j++){
		printf("* ");
		}
		printf("\n");
	}
}
