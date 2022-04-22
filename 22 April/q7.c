#include<stdio.h>
int main(){
	for(int i = 4; i>=1; i--){
		
		if(i%2==0){
			for (int j = 1; j<=i; j++){
				printf("%d",j);
			}
		}
		else if(i%2!=0){
			for(int j = i; j<=1; j--){
				printf("%d",j);
			}
		}
		printf("\n");
	}

}
