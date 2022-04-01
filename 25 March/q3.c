// find 2nd largest and 3rd largest number among 4 nos
#include <stdio.h>

int main()
{
    int a, b, c, d, t, s, max, r1, r2, result, z1 = 0, z2 = 0;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    // finding max among a,b,c,d
    s = (a > b) ? a : b;
    t = (c > d) ? c : d;
    max = (s > t) ? s : t;

    // for 2nd largest number
    if (a > b && a == max)
    {
        r1 = b;
    }
    else if (b > a && b == max)
    {
        r1 = a;
    }
    else if (a > b)
    {
        r1 = a;
    }
    else
    {
        r1 = b;
    }

    if (c > d && c == max)
    {
        r2 = d;
    }
    else if (d > c && d == max)
    {
        r2 = c;
    }
    else if (c > d)
    {
        r2 = c;
    }
    else
    {
        r2 = d;
    }

    result = (r1 > r2) ? r1 : r2;
    printf("2nd largest number = %d", result);

    // now for 3rd largest

    if ((a == max && b == result) || (a == result && b == max))
    {
        z1 = c;
        z2 = d;
    }
    else if ((a == max && c == result) || (a == result && c == max))
    {
        z1 = b;
        z2 = d;
    }

    else if ((a == max && d == result) || (a == result && d == max))
    {
        z1 = b;
        z2 = c;
    }
    else if ((b == max && c == result) || (b == result && c == max))
    {
        z1 = a;
        z2 = d;
    }

    else if ((b == max && d == result) || (b == result && d == max))
    {
        z1 = a;
        z2 = c;
    }

    else if ((d == max && c == result) || (d == result && c == max))
    {
        z1 = a;
        z2 = b;
    }

    result = (z1 > z2) ? z1 : z2;
    printf("\nThird largest = %d", result);
}