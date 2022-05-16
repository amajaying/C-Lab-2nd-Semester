//Take a string and display in the following format 

// AbcD PklM nT  VPR
//A. P. N. Vpr]

#include<stdio.h>
int main(){
    char a[50];
    scanf("%[^\n]s",a);
    int i,j,k=0;
    a[0]=a[0]-32;
    printf("%c.",a[0]);
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            printf(" %c.",a[i+1]-32);
        }
    }
}
