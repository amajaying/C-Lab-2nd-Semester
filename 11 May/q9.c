// WAF to print nth fibonacci
#include<stdio.h>

int fibo(int a){
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    scanf("%d", &n);
    n=n-1;
    for (i = 3; i <= n; ++i) {
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
}
printf("%d",nextTerm);
}
int main(){
    int a;
    printf("Enter the nth position: ");

    fibo(a);
    return 0;
}



