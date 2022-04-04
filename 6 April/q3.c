//multiplication of an integer given by a user

#include<stdio.h>
int main(){
	int a;
	int c = 1;
	int p = 0;
	printf("Enter a number: ");
	scanf("%d",&a);
	while(c<=10){
		p = a *c;
		printf("%d x %d = %d\n",a,c,p);
		c+=1;
		}
	}
