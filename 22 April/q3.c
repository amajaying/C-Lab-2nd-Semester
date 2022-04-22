//9 2 11 13 24 35 .... n using goto
#include<stdio.h>
int main(){
	int a,b,n, c=0;
	printf("Enter two numbers: ");
	scanf("%d%d", &a,&b);
	printf("Enter a range: ");
	scanf("%d",&n);
	n:
	printf("%d ",a);
	printf("%d ",b);
	a=a+b;
	b=b+a;
	c+=2;
	if(c<=n)
		goto n;
	}
