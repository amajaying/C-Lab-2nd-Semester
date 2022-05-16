//FWAF for finding factorial of a number

#include<stdio.h>
int fact(int n){
    int fact=1;
    while (n>0)
    {
        fact=fact*n;
        n--;
    }
    return fact;
    
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
}