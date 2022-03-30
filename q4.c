//take a date of a year also the day of the jan 1st of that year and then find the day of the inputted date
#include<stdio.h>
int main(){
	float d;
	int m,y,w;
	printf("Enter the date in (dd/mm/yyyy) format: ");
	scanf("%f/%d/%d",&d,&m,&y);
	printf("\nEnter the week of the 1st jan in that year: ");
	scanf("%d",&w);
	
	float a = d/7;
	printf("%f\n",a);
	
	int b = a; 
	//float x = b;
	printf("%d\n",b);
	float c = a-b;
	printf("%f",c);
	float k = c*7;
	int r = k;
	printf("\n%d",r);
	
	int z = (r+w)-(w-1);
	printf("\n%d",z);
	if(z>7){
		z=z-7;
	}
	
	switch(z){
		case 1:
			printf("Sunday");
			break;
			
		case 2:
			printf("Monday");
			break;
			
		case 3:
			printf("Tuesday");
			break;
			
		case 4:
			printf("Wednesday");
			break;
			
		case 5:
			printf("Thursday");
			break;
			
		case 6:
			printf("Friday");
			break;
			
		case 7:
			printf("Saturday");
			break;
		}
	
	
	}
