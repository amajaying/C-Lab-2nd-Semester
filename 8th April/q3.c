//prime or not

#include<stdio.h>
int main(){
	int num,c=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	int i = 2;
	
	if(num == 0 || num == 1){
		printf("it is neither prime nor composite");
	}
	else{
		while(i<=(num/2)){
			if (num%i==0){
				c=c+1;
			}
			++i;
		}
		if(c==0){
			printf("Prime");
		}
		else{
			printf("Not prime");
		}
	}
}
