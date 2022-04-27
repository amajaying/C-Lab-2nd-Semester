//create an array and fill it in a manner 
//50 47 40 29 35 44 49
#include<stdio.h>
int main(){
	int n, i,j, num,tmp;
	scanf("%d",&n);
	printf("Enter a number: ");
	scanf("%d",&num);
	int a[n];
	int c = 0;
		for(i=0,j=(n-1);i<j;i++,j--){
			a[i]=num-c;
			tmp = a[i];
			c++;
			a[j]=tmp-c;
			c++;
			num=a[j];
			if(n%2==0){
				a[n/2]=tmp-(c-1);
			}
			else{
				a[n/2]=num-c;
			}
		}
	for (i = 0; i<n; i++){
		printf("%d ", a[i]);
	} 	
}
