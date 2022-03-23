// a=0x5B b=0x64 and make 4B and B4
#include <stdio.h>
int main()
{
    unsigned char a = 0x5B;
    unsigned char b = 0x64;

    unsigned char c = a & 0x0F;
    unsigned char d = b & 0x0F;
    unsigned char e = (d << 4) | c;
    unsigned char f = (c << 4) | d;

    printf("First: %x, Second: %x", e, f);
    return 0;
}