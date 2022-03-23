// take an integer and make a round off [192 => 190]
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int result = (a % 10) < 5 ? a - (a % 10) : a + (10 - (a % 10));
    printf("%d", result);
}