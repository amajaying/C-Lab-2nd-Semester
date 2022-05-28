#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5};
    int *q=a;
    int **p=&q;
    printf("%d\n",**p);
    --*p;
    printf("%d\n",*p);

}

