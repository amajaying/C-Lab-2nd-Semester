//take 3 digit number and display it in words [123 = onetwothree]

#include<stdio.h>
int main(){
	int a,b,c,d; 
	printf("Enter a 3 digit number: ");
	scanf("%d", &a);
	
	b = a/100;
	c = (a/10)%10;
	d = a%10;
	
	switch(b){
		case 1:
			printf("one");
			break;
		case 2: 
			printf("two");
			break;
		case 3:
			printf("three");
			break; 
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6: 
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		case 0:
			printf("zero");
			break;
	}
	printf(" ");
	switch(c){
		case 1:
			printf("one");
			break;
		case 2: 
			printf("two");
			break;
		case 3:
			printf("three");
			break; 
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6: 
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		case 0:
			printf("zero");
			break;
	}
	
	printf(" ");
	switch(d){
		case 1:
			printf("one");
			break;
		case 2: 
			printf("two");
			break;
		case 3:
			printf("three");
			break; 
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6: 
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		case 0:
			printf("zero");
			break;
	}
	return 0;
}
	
