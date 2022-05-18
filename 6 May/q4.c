// Create the given pattern
#include<stdio.h>
int main(){
    char b[6]="ABCPD";
    for(int i = 5; i>=0; i--){
        for(int j = i; j <=5; j++){
            printf("%c", b[j]);
        }
        printf("\n");
    }
    return 0;
}