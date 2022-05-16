//Take a string and display in the following format 
// AbcD PklM nT  VPR
//A. P. N. Vpr

#include<stdio.h>
int main(){
    char a[50];
    int spc;
    scanf("%[^\n]s",a);

    int i,j,k=0;

    while(a[spc]!=' '){
        spc++;
    }

    for(int i=0; i<spc; i++){
        printf("%c",a[i]);
    }

    while (a[spc]!='\0'){
    {
       if(a[i]==' ')
       {
         a[i+1]=a[i+1]+32;
         printf("%c. ",a[i+1]);
       }
    }
    }
}

