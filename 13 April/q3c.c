//printing 1 to 10 in 5 lines as a triangle

#include<stdio.h>
int main(){
	int n; 
	int c = 1;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(c<=10){
		for(int i = 1; i<=n; i++){
		for(int j = 1; j<=i; j++){
		printf("%d ",c);
		c++;
		}
		printf("\n");
		}
	}
}
