#include<stdio.h>
int main()
{
    int a=10,*x;
    int **y;  
    int ***z;
    x=&a;
    y=&x;
    z=&y;
    printf("%d",*x);
    printf("\n%p\n",x);

    printf("\n%d",**y);
    printf("\n%p\n",y);

    printf("\n%d",***z);
    printf("\n%p\n",z);
  
    return 0;
}