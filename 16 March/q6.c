// take a real number and display it's integer and real part

#include <stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    int b = a;
    printf("Integer part: %d", b);
    float d = b;
    int c = (a - d) * 100;
    int s = c;
    printf("\n After decimal part: %d", s);
}