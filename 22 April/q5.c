//1 to 15 using even odd loop 
#include<stdio.h>
int main(){
	int n=5, c=1, k=1, i=0;
	
	loop:
	
		if(n%2!=0){
			k=1;
		a:
			
			printf("%d ",c);
			c++;
			k++;
			if(k<=n)
				goto a;
	}
	else{
		int d = c;
		i = d+n-1;
		b:	
			printf("%d ", i);	
			
			c++;
		i--;
		if(i>=d)
			goto b;
	
		
	}
	printf("\n");
	n--;
	if(n>=1)
		goto loop;
}

