// WAF which will take a 2D array as input and returns each rows summation. Those summations
//    has to be displayed in main function.
#include<stdio.h>
void rowsum(int p[4][4],int sum[]){
    for(int i=0;i<4;i++){
        for(int j=0; j<4; j++){
            sum[i]=sum[i]+p[i][j];
        }
    }
}

int main(){
    int a[4][4];
    int sum[4]={0};
    for(int i=0;i<4;i++){
        for(int j=0; j<4; j++){
            scanf("%d",&a[i][j]);
        }
    }
    rowsum(a,sum);
    for(int i=0; i<4; i++){
        printf("%d ", sum[i]);
    }
}