//matrix addition, substraction
#include<stdio.h>
int main(){
	int i,j;
	int c[3][3];
	int d[3][3];
	int a[3][3] = {{2,3,4},{5,6,7},{7,8,9}};
	int b[3][3] = {{3,4,3},{5,4,6},{6,5,8}};
	printf("Addition: \n");
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
			}
			printf("\n\n");
		}
	printf("Substraction: \n");
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			
			d[i][j]=a[i][j]-b[i][j];
			printf("%d\t",d[i][j]);
			}
			printf("\n");
		}
	}
