// take 3 nos and swap them

#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    x = x + y + z;
    y = x - y - z;
    z = x - y - z;
    x = x - y - z;
    printf("After swapping:%d %d %d", x, y, z);
}