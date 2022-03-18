// min and max among 4 nos
#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int max1 = (a > b) ? a : b;
    int max2 = (c > d) ? c : d;
    int max = (max1 > max2) ? max1 : max2;

    int min1 = (a < b) ? a : b;
    int min2 = (c < d) ? c : d;
    int min = (min1 < min2) ? min1 : min2;
    printf("Max= %d\nMin= %d", max, min);
}