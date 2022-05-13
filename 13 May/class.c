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

// void f1(int **x){
//     **x = **x+1;
// }

// int main(){
//     // int a[5]={1,2,3,4,5};
//     // int *b=a;  
//     // f1(b,5);
//     int a =5;
//     int *b = &a;
//     f1(&b);
//     printf("%d", a);
// }

// passing 2D array in function 
// void f1(int a[]b[8]){} - declaring and receiving
// to write using pointer - void f1(int (*b)[8]){} - pointer to an array
// f1(a) - calling
// int *b[6] - array of pointers


// Recursion - function calls itself!

int fact(int x){
    if(x==0 || x==1){
        return 1;
    }
    else
    // return x * fact(x-1);
    return fact(x-2)+fact(x-1);
}

int main(){
    int a = 7;
    int no = fact(a);
    printf("%d ",no);
}

/*Assignments:
1. WAP to differenciate call by value and call by reference.
2. WAF which will take 3 integers and return max and min among these 3 integers.
3. WAF which take a 3 digits integer value and interchange the first and last digit.
   The new number will be displayed in main and function's return type is void.
4. WAF which will take an integer array and return the sum of all the elements, max and min. 
5. WAF which will take a 2D array as input and returns each rows summation. Those summations
   has to be displayed in main function.
6. WAF which will take a string and return back the number of characters present in the string.
7. WA recursive function for factorial and fibonacci series.
8. WARF for addition of all the digits of the number.
9. WARF which will display all the digits of the number.
*/