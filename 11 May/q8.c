// WAF to display fibonacci series upto nth position
#include<stdio.h>

int fibo(int a){
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d", t1, t2);

   for (i = 3; i <= n; ++i) {
    printf(", %d", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    }
}

int main(){
    int a;
    printf("Enter the nth number: ");

    fibo(a);
}



