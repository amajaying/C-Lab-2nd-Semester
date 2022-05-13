#include<stdio.h>
int f1(int x){
    printf("This is function call by value\n");

}
int f2(int *y){
    (*y)++;
    printf("\nThis is the function call by reference. It changes the value of a");
}

int main(){
    int a = 5;
    f1(a);
    f2(&a);
    printf("\nChanged value of a: %d", a);

}