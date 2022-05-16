#include<stdio.h>
int main(){
    int a[4][4];
    int tmp[4][4];
    for (int i = 0; i<4; i++){
        for (int j=0; j<4; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            tmp[i][j]=a[i+2][j+2];
            a[i+2][j+2]=a[i][j];
            a[i][j]=tmp[i][j];
        }
    }

    int k;
    
    for(int i = 2; i<4; i++){
        for (int j = 0; j<2; j++){
            if(j==0){k=2;}
            if(j==1){k=3;}
            tmp[i][j]=a[i][j];
            a[i][j]=a[i-2][k];
            a[i-2][k]=tmp[i][j];

        }
    }
    for (int i = 0; i<4; i++){
        for (int j=0; j<4; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}