// take 2 unsigned char and create a new integer
#include <stdio.h>
int main()
{
    unsigned char a = 0x5B;
    unsigned char b = 0x64;
    int c = a;
    int d = b << 8;
    int e = c | d;
    printf("%x", e);
    return 0;
}