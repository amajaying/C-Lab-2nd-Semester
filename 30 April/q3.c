//matrix multiplication
#include<stdio.h>
int main(){
	int c[3][2] = {0};
	int a[3][4] = {{2,3,4},{5,6,7},{7,8,9}};
	int b[4][2] = {{3,4},{5,4},{6,5},{8,8}};
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<4;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
			printf("%d\t",c[i][j]);		
		}
		printf("\n");
	}
}
