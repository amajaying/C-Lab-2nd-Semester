// 2 9 1 3 7 4 5 2 6 to 9 2 1 7 3 4 5 6 2
#include<stdio.h>
int main(){
	int n, i, temp;
	scanf("%d",&n);
	int a[n];
	for (i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int c = 0,b;
	i = 0;
	int skp = 1;
	for(i=0; i<n ; i+=2){
		b=c+1;
		temp = a[c];
		a[c]=a[b];
		
		a[b]=temp;
		
		c=b+skp;
		skp++;
		}
		
	for (i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	}
