//take a string and reverse it
#include<stdio.h>
int main(){
    char a[10];
    scanf("%[^\n]s",a);
    printf("Before reversing: %s", a);
    char b[10];

    int c=0;
    while(a[c]!='\0'){
        c++;
    }
      
    for(int i=0,j=c-1; j>=0; i++,j--){
        b[i]=a[j];
    }
    printf("\nAfter reversing: %s", b);
}
