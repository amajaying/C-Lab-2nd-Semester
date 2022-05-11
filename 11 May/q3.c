//take a string with multiple words and find the number of words
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
    printf("\nThe number of words: %d", spc+1);
}