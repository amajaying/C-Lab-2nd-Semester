// good number or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);

    int left = num / 1000;
    int right = num % 10;
    int mid = (num / 10) % 100;
    int c1 = mid * mid;
    int c2 = (left * 10) + right;

    (c1 == c2) ? printf("Good number") : printf("Bad number");
    return 0;
}