// from a 4 digit no, add extreme right 2 and left 2
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int left = num / 100;
    int right = num % 100;
    int sum = right + left;
    printf("Result: %d", sum);
}