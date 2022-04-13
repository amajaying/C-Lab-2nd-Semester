//printing * in a triangle
#include<stdio.h>
int main(){
	int n; 
	printf("Enter a number: ");
	scanf("%d",&n);
	int c=1; 
	
	while (c<=n){	
		for (int i = 1; i <= (n/2); i++){
			for(int j = 1; j<=i; j++){
				printf("* ");
				c++;
			}
			printf("\n");
		}
		
		if(n%2==0){
			for (int k = 1; k<=n/2+1; k++){
				printf("* ");
			}
			printf("\n");
		}
		
		for (int i = n-(n/2); i>=1; i--){
			for (int j = 1; j<=i; j++){
				printf("* ");
				c++;
			}
			printf("\n");
		}
	}
}

