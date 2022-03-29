// find 2nd largest and 3rd largest number among 4 nos

// code is not completed!
#include <stdio.h>

int main()
{
    int a, b, c, d, t, s, max, r1, r2, result;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b)
    {
        s = a;
    }
    else
    {
        s = b;
    }

    if (c > d)
    {
        t = c;
    }
    else
    {
        t = d;
    }

    max = (s > t) ? s : t;

    if (a > b)
    {
        if (a == max)
        {
            r1 = b;
        }
        else
        {
            r1 = a;
        }
    }
    else
    {
        if (b == max)
        {
            r1 = a;
        }
        else
        {
            r1 = b;
        }
    }

    if (c > d)
    {
        if (c == max)
        {
            r2 = d;
        }
        else
        {
            r2 = c;
        }
    }
    else
    {
        if (d == max)
        {
            r2 = c;
        }
        else
        {
            r2 = d;
        }
    }

    result = (r1 > r2) ? r1 : r2;
    printf("2nd largest number = %d", result);

    if (a > b)
    {
        if (a == max || a == result)
        {
            r1 = b;
        }
        else
        {
            r1 = a;
        }
    }
    else
    {
        if (b == max || b == result)
        {
            r2 = a;
        }
        else
        {
            r2 = b;
        }
    }

    if (c > d)
    {
        if (c == max)
        {
            r1 = d;
        }
        else
        {
            r1 = c;
        }
    }
    else
    {
        if (d == max)
        {
            r2 = c;
        }
        else
        {
            r2 = d;
        }
    }

    result = (r1 < r2) ? r1 : r2;
    printf("\nThird largest = %d", result);
}