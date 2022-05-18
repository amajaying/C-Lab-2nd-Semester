//take a string with multiple words and find the number of spaces
#include<stdio.h>

int main(){
    char a[50];
    scanf("%[^\n]s",a);
    int spc=0;
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]==' '){
            spc++;
        }
    }
    printf("The number of spaces: %d",spc);
    return 0;
}