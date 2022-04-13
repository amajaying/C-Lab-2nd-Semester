//to print 1 to 15 in a triangle format
#include<stdio.h>
int main(){
	int n, c=1;
	for (n = 5; n>=1; n--){
		if(n%2!=0){
			for(int i = 1; i<=n; i++){
				printf("%d ",c);
				c++;
			}
		}
		else{
		int d = c;
			for(int i = (d+n-1); i>=d; i--){
				printf("%d ",i);
				c++;		
			}
		}
		printf("\n");
	}
}
