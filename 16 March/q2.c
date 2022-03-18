// Take 5 and generate 19265 to 65219
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a 5 digit number: ", a);
    scanf("%d", &a);
    int s1 = a % 100;
    int s2 = (a / 100) % 10;
    int s3 = a / 1000;

    int result = s1 * 1000 + s2 * 100 + s3;
    printf("%d", result);
}