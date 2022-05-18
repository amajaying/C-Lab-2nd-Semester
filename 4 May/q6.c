// Reverse the array using pointers
#include<stdio.h>
int main(){
    int a[5]={4,5,6,7,8};
    int *b = a;
    for (int i = 4; i>=0; i--){
        printf("%d",b[i]);
    }
    return 0;
}