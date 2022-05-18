#include<stdio.h>
int dis(int *c, int start, int len){
    if(start>len){
        return 0;
    }
    start++;
    printf("%d",c[0]);  
    dis(c+1,start,len);
}

int main(){
    int a[5]={1,2,3,4,5};
    dis(a,1,5);
}