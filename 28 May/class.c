// malloc and calloc    
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *b;

    // malloc syntax
    b = malloc(sizeof(int));
    *b = 5;

    for (int i = 0; i < 5; i++)
    {
        (*b)++;
        printf("%d\n",*b);
        
    }
    printf("\n");

    // free syntax
    free(b);

    // calloc syntax
    b = calloc(5,4);
    *b = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*b);
        (*b)++;
        
    }
    printf("\n");

    // realloc syntax
    // increasing size
    b = realloc(b,5);
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",*b);
        (*b)++;
        
    }
    printf("\n");

    // decreasing size
    b = realloc(b,3);
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n",*b);
        (*b)++;
        
    }
}