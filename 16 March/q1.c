// format specified in decimal hexa and octal

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Decimal: ");
    scanf("%d", &a);
    printf("Hexa: ");
    scanf("%x", &b);
    printf("Octal: ");
    scanf("%o", &c);

    printf("for %d, Decimal = %d, Octal = %o, Hexa = %x\n\n", a, a, a, a);
    printf("for %x, Decimal = %d, Octal = %o, Hexa = %x\n\n", b, b, b, b);
    printf("for %o, Decimal = %d, Octal = %o, Hexa = %x\n\n", c, c, c, c);
}