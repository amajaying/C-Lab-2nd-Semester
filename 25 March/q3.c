//take 2 times in __:__  and find diff
#include<stdio.h>
int main(){
	int h1,m1,h2,m2,h=0,m=0;
	printf("Enter the 1st time: ");
	scanf("%d:%d",&h1,&m1,a1);
	printf("Enter the 2nd time: ");
	scanf("%d:%d",&h2,&m2);
	
	if (h2>h1 || m2>m1){
		printf("%d:%d is earlier",h1,m1);
		
		if(m1<m2){
			h = h2-h1;
			m = m2-m1;
		}
		else{
			h = (h2-1)-h1;
			m = (m2+60)-m1;
		}
	}
	else{
		printf("%d:%d is earlier",h2,m2);
		
		if(m2<m1){
			h = h1-h2;
			m = m1-m2;
		}
		else{
			h = (h1-1)-h2;
			m = (m1+60)-m2;
		}
	}		
	
	printf("\nThe difference is %d hours and %d minutes",h,m);
}
