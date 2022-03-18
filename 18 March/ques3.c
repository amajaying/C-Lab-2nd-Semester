// 4 digit no, ones place swap with thousand place, tens swapped with hundreds place
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    // finding ones, tens hundreds and thousand
    int ones = num % 10;
    int ten = (num / 10) % 10;
    int hund = (num / 100) % 10;
    int thou = num / 1000;
    // swapping and  printing numbers
    int result = ones * 1000 + ten * 100 + hund * 10 + thou;
    printf("%d", result);
}