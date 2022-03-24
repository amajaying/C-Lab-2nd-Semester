// find the 5th and 9th bit of a given integer
#include <stdio.h>
int main()
{
    int a = 458;
    int b = (a & 0x0010) >> 4;
    printf("5th bit = %i", b);
    int c = (a & 0x0100) >> 8;
    printf("\n9th bit = %i", c);
}