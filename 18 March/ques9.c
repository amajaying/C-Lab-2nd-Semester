// 5 digit good or not
#include <stdio.h>
int main()
{

    // taking inputs
    int num;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    // finding the left, right and mid digits
    int left = num / 10000;
    int right = num % 100;
    int mid = (num / 100) % 100;

    // calculation
    int c1 = mid * mid;
    int c2 = left * 100 + right;

    // checking and printing
    (c1 == c2) ? printf("Good Number") : printf("Bad Number");

    return 0;
}