#include<stdio.h>
int main(){
    int a,b,c,*x,*y,*z, g;
    scanf("%d%d%d", &a,&b,&c);

    x=&a;
    y=&b;
    z=&c;

    if((*x>*y)&&(*x>*z)){
        g = *x;
    }
    else if((*y>*z)&&(*y>*x)){
        g = *y;
    }
    else{
        g=*z;
    }

    printf("Greatest: %d\n", g);
}