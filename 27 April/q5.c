//take an array and do the cumulation
#include<stdio.h>
int main(){
	int n, i, sum=0;
	scanf("%d",&n);
	int a[n];
		
	for (i = 0; i<n; i++){
		scanf("%d",&a[i]);	
	}
	
	for (i = 0; i<n; i++){
		sum = sum + a[i];
		a[i]=sum;	
	}
	
	for (i = 0; i<n; i++){
		printf("%d ", a[i]); 	
	}
}
