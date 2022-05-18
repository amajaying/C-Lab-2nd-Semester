// WARF to find the reverse of the number.

#include<stdio.h>
void rev(int n){
    if(n==0)
        return;
    printf("%d",n%10);
    rev(n/10);
}

int main(){
    int num;
    scanf("%d",&num);
    rev(num);
}