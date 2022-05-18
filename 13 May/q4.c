#include<stdio.h>
int calc(int x[],int n, int *max, int *min){
    int sum=0;
    *min=x[0];
    *max=x[0];
    for (int i=0; i<n; i++){
        sum=sum+x[i];
        if(x[i]>*max){
            *max=x[i];
        }
        if(x[i]<*min){
            *min=x[i];
        }
    }

    return sum;
}
int main(){
    int max,min;
    int a[8]={-12,2,99,4,5,6,7,8};
    int s = calc(a,8, &max,&min);
    printf("%d",s);
    printf("\nMax=%d",max);
    printf("\nMin=%d",min);
}