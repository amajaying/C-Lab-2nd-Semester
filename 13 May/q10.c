// 10. WARF which will display all the digits of the number reversed.
#include<stdio.h>
void pri(int n){
    if(n==0){
        return;
    }
    printf("%d",n%10);
    pri(n/10);
}

int main(){
    int a;
    scanf("%d",&a);
    pri(a);
    return 0;
}