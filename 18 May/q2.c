// WARF which will return sum of all the integers present in an array.
#include<stdio.h>
int summ(int *c, int start, int len, int *sum1){
    if(start>len){
        return 0;
    }
    start++;
    *sum1=*sum1+c[0];
    summ(c+1,start,len,sum1);
}

int main(){
    int sum1=0;
    int a[7]={1,2,3,4,5,6,7};
    summ(a,1,7,&sum1);
    printf("Sum = %d",sum1);
}