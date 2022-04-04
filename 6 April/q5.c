//leap year between 2 given years by user

#include<stdio.h>
int main(){
	int y1,y2;
	printf("Enter two years where 1st year is less than 2nd year: ");
	scanf("%d%d",&y1,&y2);
	
	while(y1<=y2){
		if((y1%4==0 && y1%100!=0)||y1%400==0){
		printf("%d\n",y1);
		}
		y1+=1;
	}
}
