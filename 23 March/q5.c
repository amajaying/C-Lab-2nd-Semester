// 0x5A34BDA2 to 0x5ABD34A2
#include <stdio.h>
int main()
{
    int a = 0x5A34BDA2;

    int b = (a & 0x00FF0000) >> 8;
    int c = (a & 0x0000FF00) << 8;
    int d = a & 0xFF0000FF;

    int r = b | c | d;
    printf("result = %x", r);
}