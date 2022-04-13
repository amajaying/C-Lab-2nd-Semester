//print 1 to 4 in a triangle form which is right aligned
#include<stdio.h>
int main(){
	int n; 
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(int i = 1; i<=n; i++){
		for (int j = 1; j <=n-i; j++){
			printf(" ");
		}
		for(int j = 1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
		
}
