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
	for(int i =0; i
	
	for(int i = 0; i<=2; i++){
		for(int j = i; j<=2; j++){
			printf("%d\t",arr[i][j]);
			}
		}
	}
