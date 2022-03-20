// min and max among 6 nos
#include <stdio.h>
int main()
{
    // taking inputs
    int a, b, c, d, e, f;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    int max1 = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int max2 = (d > e) ? ((d > f) ? d : f) : ((e > f) ? e : f);

    int max = (max1 > max2) ? max1 : max2;

    int min1 = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    int min2 = (d < e) ? ((d < f) ? d : f) : ((e < f) ? e : f);
    int min = (min1 < min2) ? min1 : min2;

    printf("Max= %d\nMin= %d", max, min);
}