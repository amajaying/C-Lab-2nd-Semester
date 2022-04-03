//take an integer and print in Rs format
#include<stdio.h>
int main(){
	long int a; 
	printf("Enter the number: ");
	scanf("%ld",&a);
	printf("Rs. ");
	int count = 0;
	int i, pr,b;
	int d = a;
	
	//finding the num of digits
	while (d!=0){
		d=d/10;
		count++;
		}
		
	d=a;
	
	//finding power
	int p = count - (count%3);
	if(p==count){
		p=p-3;
	}
	while(p>0){
	i=1;
	pr = 1;
	
	while(i<=p){
		pr = pr*10;
		i++;
	}
	
	b = d/pr;
	
	d = d%pr;
	printf("%d, ",b);
	p=p-3;
	
	}

	printf("%d.00",d);	
}
