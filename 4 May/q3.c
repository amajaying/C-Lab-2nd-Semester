// Take 2 pointers pointing to 2 variables. Interchange their values using pointers.
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
    return 0;
}