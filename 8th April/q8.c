//print calendar of the month by making the user enter the first day of the month 
#include<stdio.h>
int main(){
	int day;
	int b = 1;
	
	printf("Enter the first day of january: ");
	scanf("%d",&day);
	int c = day;
	printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
	while(b<c){
		printf("\t");
		b+=1;
		}
	
	b=1;
	while (b<=31){
		printf("%d\t",b);
		if(c%7==0){
			printf("\n");
		}
		b++;
		c++;
		}
}
