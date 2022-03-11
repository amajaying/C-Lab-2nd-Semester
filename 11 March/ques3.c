// Take 2 values and swap them

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
}