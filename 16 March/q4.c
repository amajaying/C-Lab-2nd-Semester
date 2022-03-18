// take 4 digit no and display each digit in a new line
#include <stdio.h>
int main()
{
    // if a = 1234
    int a;
    scanf("%d", &a);

    // to print 4 3 2 1 each in new line
    int rev1 = a % 10;
    printf("%d\n", rev1);

    int rev2 = (a / 10) % 10;
    printf("%d\n", rev2);

    int rev3 = (a / 100) % 10;
    printf("%d\n", rev3);

    int rev4 = a / 1000;
    printf("%d\n", rev4);

    // to print 1 2 3 4
    printf("\nnextline\n");
    printf("\n%d\n%d\n%d\n%d", rev4, rev3, rev2, rev1);
}