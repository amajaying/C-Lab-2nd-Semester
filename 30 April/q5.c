//lower triangle
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
	for(int i = a/2; i<a; i++){
		
		for(int j = i; j<b; j++){
			printf("%d%d\t",i,j); 
			}
		}
	}
