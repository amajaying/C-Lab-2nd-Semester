#include<stdio.h>
int main(){
    int a,b,*y,*z,temp;
    printf("Enter value of a & b: ");
    scanf("%d%d", &a,&b);

    y = &a;
    z = &b;

    temp = *y;
    *y = *z;
    *z = temp;

    printf("%d\t%d\n", a,b);

}