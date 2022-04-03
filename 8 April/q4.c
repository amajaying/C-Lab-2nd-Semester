//prime no between 2 integers
//code not completed

#include<stdio.h>
int main(){
	int a,b,j,c=0;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	printf("The prime numbers are: ");
	int i = a;
	while(i<=b){
		j=1;
		while(i<=(b/2)){
			if (a%j!=0){
				c=c+1;
				break;
			}
			j++;
		}
		if(c>0){
			printf("%d",i);
			c=0;
		}	
		i++;
	}
}
