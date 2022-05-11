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
    printf("%d",b);

    for (int i=5;a[i]!='\0';i++){
        printf("%c",a[i]);
    }
    
}