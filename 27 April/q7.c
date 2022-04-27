#include<stdio.h>
int main(){
	int tmp, n, i, j;
	scanf("%d",&n);
	int a[n];
	for (i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0, j=(n/2); i<j; i++,j--){
		tmp = a[i];
		a[j]=a[i];
		a[j]=tmp;
	}
	
	for (i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	
}
