// take an int number and display its each byte
#include <stdio.h>
int main()
{
    int a = 0x465dfea4;
    int b1 = (a & 0xFF);
    int b2 = (a & 0xFF00) >> 8;
    int b3 = (a & 0xFF0000) >> 16;
    int b4 = (a & 0xFF000000) >> 24;
    printf("1st byte: %x \n2nd byte: %x\n3rd byte: %x\n4th byte: %x", b1, b2, b3, b4);
}