// WARF to find the reverse of the number.
#include<stdio.h>
int rev(int n,int r){
    if(n>0){
        r=r*10+n%10;
        rev(n/10,r);
    }
    else{
        return r;
    }   
}
int main(){
    int num;
    int a;
    scanf("%d",&num);
    a = rev(num,0);
    printf("%d",a);
}