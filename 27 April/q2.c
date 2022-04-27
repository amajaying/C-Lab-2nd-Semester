//take a variable size array and reverse the whole array
#include<stdio.h>
int main(){
	int n, i,j, temp;
	scanf("%d",&n);
	int a[n];
	for (i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	printf("Before Reversing\n");
	for (i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
	for (i=0, j=n-1; i<j; i++,j--){
		temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
		
	printf("\nAfter Reversing\n");
	for (i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
}
