// min and max among 3 nos
#include <stdio.h>
int main()
{
    int a, b, c, max, min;
    scanf("%d%d%d", &a, &b, &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("Max= %d\nMin= %d", max, min);
}