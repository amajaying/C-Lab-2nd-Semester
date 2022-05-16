//Take a string and display in following manner
// ABCD PKLM NT VPR 
// Abcd Pklm Nt Vpr

#include<stdio.h>
int main(){
    char a[50];
    scanf("%[^\n]s",a);
    int i,j,k=0;
    a[0]=a[0]+32;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            a[i+1]=a[i+1]+32;
        }
    }
printf("%s",a);
}
