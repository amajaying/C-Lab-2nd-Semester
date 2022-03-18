// 4 digit no, ones place swap with thousand place, tens swapped with thousand place
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int ones = num % 10;
    int ten = num / 10;
    ten = ten % 10;
    int hund = num / 100;
    hund = hund % 10;
    int thou = num / 1000;

    // swapping numbers
    int swap = thou;
    thou = ones;
    ones = swap;
    swap = hund;
    hund = ten;
    ten = swap;

    // printing numbers
    printf("%d%d%d%d", thou, hund, ten, ones);
}