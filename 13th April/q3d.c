//printing 10 to 1 in 5 lines as a triangle

#include<stdio.h>
int main(){
	int n = 4; 
	int c = 10;
	
	
	while(c>=1){
		for(int i = 1; i<=n; i++){
		for(int j = 1; j<=i; j++){
		printf("%d ",c);
		c--;
		}
		printf("\n");
		}
	}
}

