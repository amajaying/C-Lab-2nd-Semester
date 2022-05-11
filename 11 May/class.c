#include<stdio.h>

int add (int x, int y){
    return x+y;
}

int main(){
    int a, b, sum;
    scanf("%d%d", &a,&b);
    sum = add(a,b);
    printf("%d", sum);
}