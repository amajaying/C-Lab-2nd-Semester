#include<stdio.h>
int main(){
    char b[6]="ABCPD";
    for(int i=0; i<6; i++){
        for(int k = 0; k<i; k++){
            printf(" ");
        }
        for(int j = i; j<6; j++){
            printf("%c",b[j]);
        }
        printf("\n");
    }
}