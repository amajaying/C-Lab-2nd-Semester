// 8. WA recursive function for fibonacci series.
#include<stdio.h>
int fibo(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int a;
    printf("Enter the nth number: ");
    scanf("%d",&a);
    int r = fibo(a);
    printf("%d",r);
    return 0;
}



