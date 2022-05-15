// Create pointers pointing to different types of data through the pointers. You need to fill the data and display the data.
#include<stdio.h>
int main(){
    int a;
    double c;
    
    int *x=&a;
    double *z=&c;

    scanf("%d",x);
    scanf("%lf",z);

    printf("\n%d\n%.2f",*x,*z);
}