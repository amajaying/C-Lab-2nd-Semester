// DOB to days
#include <stdio.h>
int main()
{
    int y, m, d;
    printf("Enter your age in y m d format: ");
    scanf("%d%d%d", &y, &m, &d);

    int days = y * 365 + m * 30 + d;
    printf("The age in days is: %d", days);
}