// take 3 digit and reverse it

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int rev1 = a % 10;
    int rev2 = (a / 10) % 10;
    int rev3 = (a / 100);
    int result = rev1 * 100 + rev2 * 10 + rev3;
    printf("Result = %d", result);
    return 0;
}