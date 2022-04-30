//upper diagonal printing
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int arr[a][b];
	
	for(int i = 0; i<a;i++){
		for(int j=0; j<b; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int c = 0;
	for(int i = 0; i<b; i++){
		for(int k=0;k<c;k++){
			printf(" ");
		}
		c++;
		
		for(int j = i; j<b; j++){	
			printf("%d",arr[i][j]);
		}	
		printf("\n");
	}
}
