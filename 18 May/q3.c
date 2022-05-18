// WARF to reverse a string
#include<stdio.h>
void rev(char *p){
    if(*p=='\0')
        return;
    rev(p+1);
    printf("%c",*p);
}
int main(){
    char a[50];
    scanf("%s",a);
    rev(a);
}