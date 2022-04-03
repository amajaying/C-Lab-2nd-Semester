//reverse of a number
//code not completed
#include<stdio.h>
int main(){
	int num,x,p,count=0;
	int c;
	
	int i= 1;
	printf("enter a number and a digit separated by spaces: ");
	scanf("%d%d",&num,&c);
	int d = num;
	
	while (d!=0){
		d=d/10;
		count++;
		}
	
	while(i<=d){
		p = p*10;
		i++;
	}	
	
	d=num;
	i=1;
	while(d>0){
		x=d%p;
		printf("%d",x);
		d=d/p;
		while(i<=c){
			p=p/10;
			i++;
		}
	}
	
	
	}
