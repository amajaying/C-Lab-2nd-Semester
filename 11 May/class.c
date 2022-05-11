#include<stdio.h>

int add (int x, int y){
    return x+y;
}

void f1(int no, char t){
    for(int i=0; i<no; i++){
        for(int j = 0; j<no; j++){
            printf("%c",t);
        }
        printf("\n");
    }
}
int main(){
    // int a, b, sum;
    // scanf("%d%d", &a,&b);
    // sum = add(7,b);
    // printf("%d", sum);
    // int f = printf("abg7777c");
    // printf("%d",f);
    f1(3,'@');
}