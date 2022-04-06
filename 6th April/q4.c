//display number between 2 integers, given by user, which is divisible by 7 and 8

#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two integers where a<b: ");
	scanf("%d%d",&a,&b);
	while (a<=b){
		if(a%7==0 && a%8==0){
			printf("%d\n",a);
			}
			a++;
	}
}
