// 1/1! + 1/3! + 2/5! + 3/7! + 5/9! + 8/11!
#include <stdio.h>

int fibo(int n){
    int a=0,b=1,f;
    
    if(n==1){
        return 1;
    }
    for(int i=1;i<n;i++){
        f=a+b;
        a=b;
        b=f;
    }
    return f;
}
int fact(int a){
    int z=1;
    for(int i=1;i<=2*a-1;i++){
        z*=i;
    }
    return z;
}

int main(){
    int a;
    scanf("%d",&a);
    float sum=0;
    

    for(int i=1;i<=a;i++){
        int c=fibo(i);
        int d=fact(i);
        sum+=c*1.0/d;        
    }
    printf("%f",sum);
    

    return 0;

}