//Take a 10 size array and fill tables in following manners
//    14 29 40 47 50 49 44 35 22 2
#include<stdio.h>
int main(){
    int a[10]={0};
    int *b=a;
    int c=4;
    int x=50;

    for(int i=0; i<10; i++){
        b[c]= x;
                
        if (i%2==0){
            c=c+i+1;
            x=x-(i+1);
        }
        else if(i%2!=0){
            c=c-(i+1);
            x=x-(i+1);
        }
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d ", b[i]);
    }


}