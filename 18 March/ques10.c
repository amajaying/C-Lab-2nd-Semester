// take two timie in hrs, min and find difference
#include <stdio.h>

int main()
{
    // declaring and taking inputs
    int hr1, hr2, min1, min2, h;
    printf("Enter first time in hours and minutes: ");
    scanf("%d%d", &hr1, &min1);
    printf("Enter second time in hours and minutes: ");
    scanf("%d%d", &hr2, &min2);

    // converting hours into minutes
    int t1 = hr1 * 60 + min1;
    int t2 = hr2 * 60 + min2;

    // calculation
    int s = (t2 > t1) ? 0 : 1;
    float diff = t1 - t2;
    float a = diff / 60;
    int hr = a;

    // minutes into hours
    int b = (a - hr) * 60;

    // checking & printing
    (s == 1) ? printf("The time difference: %i hours and %i minutes", hr, b) : printf("Can't be determined!");

    return 0;
}