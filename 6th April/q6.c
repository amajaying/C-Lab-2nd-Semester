//summation of the all even numbers between 2 numbers entered by the user

#include<stdio.h>
int main(){
	int a, b, sum=0;
	printf("Enter 2 numbers where 1st num is less than 2nd: ");
	scanf("%d%d",&a,&b);
	
	while(a<=b){
		if(a%2==0){
			sum = sum+a;
		}
		a++;
	}
	
	printf("The summation is: %d",sum);
}
