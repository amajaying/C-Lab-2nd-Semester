// Take 5 and generate 19265 to 65219
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a 5 digit number: ", a);
    scanf("%d", &a);
    int s1 = a % 100;
    int s2 = a / 100;
    s2 = s2 % 10;
    int s3 = a / 1000;

    printf("%d", s1);
    printf("%d", s2);
    printf("%d", s3);
}