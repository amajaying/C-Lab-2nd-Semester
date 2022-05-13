#include <stdio.h>
int minmax(int x, int y, int z, int *max)
{
    if (x > y && x > z)
    {
        *max = x;
    }
    else if (y > x && y > z)
    {
        *max = y;
    }
    else
    {
        *max = z;
    }
    int min = 0;
    if (x < y && x < z)
    {
        min = x;
    }
    else if (y < x && y < z)
    {
        min = y;
    }
    else
    {
        min = z;
    }
    return min;
}
int main()
{
    int a, b, c, max, min;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    min = minmax(a, b, c, &max);

    printf("max = %d & min = %d", max, min);
}