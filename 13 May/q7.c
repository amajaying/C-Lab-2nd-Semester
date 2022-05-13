#include<stdio.h>
int fact(int x){
    if(x==0 || x==1){
        return 1;
    }
    else
    return fact(x-2)+fact(x-1);
}

int main(){
    int a = 7;
    int no = fact(a);
    printf("%d ",no);
}