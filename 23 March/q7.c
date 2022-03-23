// take an int number and display its each byte
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b1 = a & 0x0000000F;
    printf("1st byte: %d", b1);
}