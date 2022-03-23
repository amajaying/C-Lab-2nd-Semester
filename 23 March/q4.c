// a=0x46 b=0x39 and generate 4936
#include <stdio.h>
int main()
{
    int a = 0x46;
    int b = 0x39;
    int c = (a & 0x00F0) << 8; // 4
    int d = (a & 0x000F);      // 6
    int e = (b & 0x00F0);      // 3
    int f = (b & 0x000F) << 8; // 9

    int result = c | f | e | d;

    printf("%x", result);
}