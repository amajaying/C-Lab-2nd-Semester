// take 5 and display middle 3 digit
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int mid = a / 10;
    mid = mid % 1000;
    printf("%d", mid);
}