// Functions 
// Call by value and call by reference 
// 👀👀👀👀👀👀👀
// tukur tukur kya dekh rhe ho ?
// *b+i = b[i]

#include<stdio.h>

// void f1(int *x, int n){
//     for (int i=0; i<n;i++){
//         printf("%d",x[i]);
//     }
// }

void f1(int **x){
    **x = **x+1;
}

int main(){
    // int a[5]={1,2,3,4,5};
    // int *b=a;  
    // f1(b,5); 
    int a =5;
    int *b = &a;
    f1(&b);
    printf("%d", a);
}

// passing 2D array in function 
// void f1(int a[]b[8]){} - declaring and receiving
// to write using pointer - void f1(int (*b)[8]){} - pointer to an array
// f1(a) - calling
// int *b[6] - array of pointers
