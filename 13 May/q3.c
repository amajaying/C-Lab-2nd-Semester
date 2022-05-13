#include<stdio.h>

void inter(int *a){
    int x,y,z;
    x = (*a)%10;
    y = ((*a)/10)%10;
    z = (*a)/100;
    // printf("%d%d%d",x,y,z);
    *a = x*100+y*10+z;
}

int main(){
    int a;
    printf("Enter a 3 digit integer: ");
    scanf("%d",&a);
    inter(&a);
    printf("\nThe interchange value is: %d", a);
}