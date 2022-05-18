// 9. WARF for addition of all the digits of the number.
#include<stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    int x=n%10;
    int s=x+sum(n/10);
    return s;
}
int main(){
    int a;
    scanf("%d",&a);
    int c=sum(a);
    printf("%d",c);
    return 0;
}