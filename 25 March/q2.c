// take 2 times in __:__  and find diff also am pm
#include <stdio.h>
int main()
{
    int hr1, min1, ap1, hr2, min2, ap2, nhr1 = 0, nhr2 = 0, hr_diff, min_diff;
    printf("Enter the 1st time (HH:MM) with (AM =1 and PM =0): ");
    scanf("%d:%d%d", &hr1, &min1, &ap1);
    printf("Enter the 2nd time (HH:MM) with (AM =1 and PM =0): ");
    scanf("%d:%d%d", &hr2, &min2, &ap2);

    // Condition for AM PM
    if (hr1 == 12)
    {
        hr1 -= 12;
    }
    if (hr2 == 12)
    {
        hr2 -= 12;
    }
    if (ap1 == 0)
    {
        nhr1 = hr1 + 12;
    }
    if (ap2 == 0)
    {
        nhr2 = hr2 + 12;
    }
    if (ap1 == 1)
    {
        nhr1 = hr1;
    }
    if (ap2 == 1)
    {
        nhr2 = hr2;
    }

    if (nhr1 > nhr2)
    {
        printf("%d:%d %d is earlier \n", hr2, min2, ap2);
        if (min1 < min2)
        {
            min1 += 60, nhr1 = nhr1 - 1;
            hr_diff = nhr1 - nhr2;
            min_diff = min1 - min2;
            printf("The difference is %d hr and %d min ", hr_diff, min_diff);
        }
        else
        {
            hr_diff = nhr1 - nhr2;
            min_diff = min1 - min2;
            printf("The difference is %d hr and %d min ", hr_diff, min_diff);
        }
    }
    else if (nhr2 > nhr1)
    {
        printf("%d:%d %d is earlier \n", hr1, min1, ap1);
        if (min2 < min1)
        {
            min2 += 60, nhr2 = nhr2 - 1;
            hr_diff = nhr2 - nhr1;
            min_diff = min2 - min1;
            printf("The difference is %d hr and %d min ", hr_diff, min_diff);
        }
        else
        {
            hr_diff = nhr2 - nhr1;
            min_diff = min2 - min1;
            printf("The difference is %d hr and %d min ", hr_diff, min_diff);
        }
    }
    else if (nhr1 == nhr2)
    {
        if (min1 > min2)
        {
            printf("%d:%d %d is earlier\n", hr2, min2, ap2);
            min_diff = min1 - min2;
            printf("The difference is %d min", min_diff);
        }
        else
        {
            printf("%d:%d %d is earlier\n", hr1, min1, ap1);
            min_diff = min2 - min1;
            printf("The difference is %d min", min_diff);
        }
    }
    printf("%d,%d", nhr1, nhr2);

    return 0;
}