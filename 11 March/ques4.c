// DOB age teller with current date
// not completed need to debug

#include <stdio.h>
int main()
{
    int y, m, d;
    int cy = 2022, cm = 3, cd = 11;
    scanf("%d%d%d", &y, &m, &d);

    if (cd < d)
    {
        m = m - 1;
        d = 30 - d + cd;
        // printf("date changed");
    }

    if (cm < m)
    {
        y = y - 1;
        m = 12 - m;
    }

    int ny = cy - y;
    int nm = cm - m;
    int nd = cd - d;

    printf("Years: %d, Months: %d, Days: %d", ny, nm, nd);
}
