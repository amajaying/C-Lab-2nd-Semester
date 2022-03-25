#include <stdio.h>
int main()
{
    int hr1, min1, ap1, hr2, min2, ap2;
    printf("enter two times in hh:mm am/pm format : \n"); // write 0 for pm and 1 for am
    scanf("%d:%d %d \n", &hr1, &min1, &ap1);
    scanf("%d:%d %d", &hr2, &min2, &ap2);
    int new_hr1 = 0, new_hr2 = 0, hr_diff, min_diff;
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
        new_hr1 = hr1 + 12;
    }
    if (ap2 == 0)
    {
        new_hr2 = hr2 + 12;
    }
    if (ap1 == 1)
    {
        new_hr1 = hr1;
    }
    if (ap2 == 1)
    {
        new_hr2 = hr2;
    }

    if (new_hr1 > new_hr2)
    {
        printf("%d:%d %d is earlier \n", hr2, min2, ap2);
        if (min1 < min2)
        {
            min1 += 60, new_hr1 = new_hr1 - 1;
            hr_diff = new_hr1 - new_hr2;
            min_diff = min1 - min2;
            printf("The difference is %d hr and %d min ", hr_diff, min_diff);
        }
        else
        {
            hr_diff = new_hr1 - new_hr2;
            min_diff = min1 - min2;
            printf("The difference is %d hr and %d min ", hr_diff, min_diff);
        }
    }
    else if (new_hr2 > new_hr1)
    {
        printf("%d:%d %d is earlier \n", hr1, min1, ap1);
        if (min2 < min1)
        {
            min2 += 60, new_hr2 = new_hr2 - 1;
            hr_diff = new_hr2 - new_hr1;
            min_diff = min2 - min1;
            printf("The difference is %d hr and %d min ", hr_diff, min_diff);
        }
        else
        {
            hr_diff = new_hr2 - new_hr1;
            min_diff = min2 - min1;
            printf("The difference is %d hr and %d min ", hr_diff, min_diff);
        }
    }
    else if (new_hr1 == new_hr2)
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
    printf("%d,%d", new_hr1, new_hr2);

    return 0;
}