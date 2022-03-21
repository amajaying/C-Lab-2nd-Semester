// take two timie in hrs, min and find difference
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring and taking inputs
    int hr1, hr2, min1, min2, hr, min;
    printf("Enter first time in hours and minutes: ");
    scanf("%d%d", &hr1, &min1);
    printf("Enter second time in hours and minutes: ");
    scanf("%d%d", &hr2, &min2);

    min = (hr1 > hr2) ? ((min1 > min2) ? (min1 - min2) : (60 + min1 - min2)) : 0;
    hr = hr1 - hr2;

    (min != 0) ? printf("The time difference: %i hours and %i minutes", hr, min) : printf("Can't be determined!");

    return 0;
}