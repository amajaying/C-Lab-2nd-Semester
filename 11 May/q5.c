//Take a string and display in following manner
// ABCD PKLM NT VPR 
// Abcd Pklm Nt Vpr

#include<stdio.h>
int main(){
    char a[50];
    scanf("%[^\n]s",a);
    int i,j,k=0;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            i++;
        }
        else{
            a[i]=a[i]+32;
        }
    }
printf("%s",a);
}