//(1/3)+(3/5)+(5/7)+......

#include<stdio.h>
int main(){
	int n;
	int a = 1;
	float sum=0; 
	printf("Enter a number: ");
	scanf("%d",&n);
	while(a<=(n-2)){
		sum = sum + a*1.0/(a+2);
		a+=2;
		}
		
	printf("sum is: %f",sum);
	}
