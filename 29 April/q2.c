//create a 2d array and fill the values in given manner
//1  2  3 4 
//5  6  7 8 
//9 10 11 12
#include<stdio.h>
int main(){
	int a[3][4];
	int b = 1;
	for (int i=2; i>=0; i--){
		if(i%2==0){
			for(int j=0; j<4; j++){
				a[i][j] = b;
				printf("%d ", a[i][j]);
				b++;
			}
		}
			else{
				for(int j=3; j>=0; j--){
					a[i][j] = b;
					printf("%d ", a[i][j]);
					b++;
				}
			}
				printf("\n");
		} 
	}
