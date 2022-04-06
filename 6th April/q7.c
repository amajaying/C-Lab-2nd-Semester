//(1/3)+(5/7)+(9/11)=.......

#include<stdio.h>
int main(){
	int a= 1;
	int b;
	float sum=0; 
	printf("Enter a number: ");
	scanf("%d",&b);
	
	while(a<=b){
		sum=sum+(a*1.0/(a+2));
		a+=4;
		}
		printf("sum is: %f",sum);
}
