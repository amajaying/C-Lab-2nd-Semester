//matrix transpose
#include<stdio.h>
int main(){
	int i,j;
	int a[3][3] = {{2,3,4},{5,6,7},{7,8,9}};
	
	printf("Before Transpose:\n");
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d\t", a[i][j]);
		}
			printf("\n\n");
	}
	
	
	printf("After Transpose:\n");
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d\t", a[j][i]);
		}
			printf("\n\n");
	}
}
