// take 3 digit and reverse it

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    int rev1 = a % 10;
    printf("%d", rev1);

    int rev2 = (a / 10) % 10;
    printf("%d", rev2);

    int rev3 = (a / 100);
    printf("%d", rev3);
}