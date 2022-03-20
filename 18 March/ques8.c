// good number or not
#include <stdio.h>
int main()
{
    // taking inputs
    int num;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);

    // finding left, right and mid
    int left = num / 1000;
    int right = num % 10;
    int mid = (num / 10) % 100;

    // calculations
    int c1 = mid * mid;
    int c2 = (left * 10) + right;

    // checking and printing
    (c1 == c2) ? printf("Good number") : printf("Bad number");
    return 0;
}