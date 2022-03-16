#include <stdio.h>
int main()
{
    int a = 2, b = 3, c = 4;
    swap(a, c);
    swap(b, c);
    printf("%d %d %d", a, b, c);
}