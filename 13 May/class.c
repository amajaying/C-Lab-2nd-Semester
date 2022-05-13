// Functions 
// Call by value and call by reference 
// 👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀
// tukur tukur kya dekh rhe ho ?
// *b+i = b[i]

#include<stdio.h>

void f1(int *x, int n){
    for (int i=0; i<n;i++){
        printf("%d",x[i]);
    }
}

int main(){
    int a[5]={1,2,3,4,5};
    int *b=a;  
    f1(b,5); 
}

// passing 2D array in function 
// void f1(int a[]b[8]){} - declaring and receiving
// to write using pointer - void f1(int (*b)[8]){}
// f1(a) - calling
