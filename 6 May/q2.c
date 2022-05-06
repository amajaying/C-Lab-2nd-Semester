//take a string and reverse it
#include<stdio.h>
int main(){
    char a[10];
    scanf("%[^\n]s",a);
    printf("Before reversing: %s", a);
    char b[10];    
    for(int i=0,j=7; j>=0; i++,j--){
        b[i]=a[j];
    }
    printf("\nAfter reversing: %s", b);
}
