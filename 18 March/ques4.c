// wap to find minimun of 2 nos
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int d = (a > b) ? b : a;
    printf("Min number is: %d", d);
    return 0;
}