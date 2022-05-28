// take two float values and interchange address 101 with 102 with other and 102 with 101 of other and then display both float values after interchanging.

#include<stdio.h>
int main(){
    float a=44.5, b=4.55;
    char *c = (char *)&a;
    char *d = (char *)&b;

    printf("Before Changing: \n");
    printf("%d %d %d %d\n", c[0],c[1],c[2],c[3]);
    printf("%d %d %d %d", d[0],d[1],d[2],d[3]);
    int temp = c[1];
    c[1]=d[2];
    d[2]=temp;

    temp = c[2];
    c[2]=d[1];
    d[1]=temp;

    printf("\nAfter Changing: \n");
    printf("%d %d %d %d\n", c[0],c[1],c[2],c[3]);
    printf("%d %d %d %d", d[0],d[1],d[2],d[3]);

}