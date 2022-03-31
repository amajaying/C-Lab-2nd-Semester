//printing numbers and * in alternate lines

#include<stdio.h>
int main(){
	int n;
	int c = 1;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for (int i = 1; i<=n; i++){
		
		if(i%2==0){
			for(int j = 1; j<=i; j++){
				printf("* ");
				c=1;
			}
		}
		else{
			for (int j = 1; j<=i; j++){
				printf("%d ",c);
				c++;
				}
			}
		printf("\n");
		}
	}
