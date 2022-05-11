//take a 3 words string and print the middle
#include<stdio.h>
int main(){
    int b=0,c,x;
    char a[100];
    scanf("%[^\n]s",a);
    int i =0;
    while (a[i]!=' '){
        i++;
    }
    b = i+1;

    for (int i=b;a[i]!=' ';i++){
        printf("%c",a[i]);
    }
    
}