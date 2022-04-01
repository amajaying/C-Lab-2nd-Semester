// code not completed
#include <stdio.h>
int main()
{
    int d1 = 22, m1 = 3, y1 = 1965, h1 = 9, min1 = 59, ap1 = 0;
    int d2 = 23, m2 = 1, y2 = 1923, h2 = 10, min2 = 25, ap2 = 1;
    int c = 0;
    int nd = 0, nm = 0, ny = 0, nhr = 0, nmin = 0;

    if (ap1 == 0)
    {
        h1 = +12;
    }

    if (ap2 == 0)
    {
        h2 = +12;
    }

    if (y1 < y2)
    {
        c++;
        if (m1 < m2)
        {
            c++;
            if (d1 < d2)
            {
                c++;
                if (h1 < h2)
                {
                    c++;
                    if (min1 < min2)
                    {
                        c++;
                    }
                }
            }
        }
    }

    if (c > 1)
    {
        printf("%d/%d/%d, %d:%d is earlier.", d1, m1, y1, h1, min1);
    }
    else
    {
        printf("%d/%d/%d, %d:%d is earlier.", d2, m2, y2, h2, min2);
    }
}