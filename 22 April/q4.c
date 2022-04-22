//display A to Z using goto
#include<stdio.h>
int main(){
	int a = 65;
	x:
	printf("%c ",a);
	a++;
	if(a<91)
		goto x;
}
