// take a real number and display it's integer and real part

#include <stdio.h>
int main()
{
    float num = 12.05;
    int a = num;
    int z = (num - a) * 100;
    printf("Integer part: %i", a);
    printf("\nReal part: %i", z);
    return 0;
}