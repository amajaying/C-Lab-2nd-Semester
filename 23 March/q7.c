// take an int number and display its each byte
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b1 = (a & 0x000F);
    int b2 = (a & 0x00F0) >> 4;
    int b3 = (a & 0x0F00) >> 8;
    int b4 = (a & 0xF000) >> 12;
    printf("1st byte: %i \n2nd byte: %i\n3rd byte: %i\n4th byte: %i", b1, b2, b3, b4);
}