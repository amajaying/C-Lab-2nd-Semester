// take a real number and display it's integer and real part

#include <stdio.h>
int main()
{
    float num, a;
    int integer;
    printf("\n enter a number with 2 decimal digit:");
    scanf("\n%f", &num);
    integer = num;
    a = (num - integer);
    int b = a;
    printf("\n number=%f", num);
    printf("\n integer part=%i", integer);
    printf("\n decimal part=%f", b);
}