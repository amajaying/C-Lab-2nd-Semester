// multiply extreme digit from a 4 digit no and then substract the result with the two middle digits

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    // finding left, right and middle nos
    int left = num / 1000;
    int right = num % 10;
    int middle = (num / 10) % 100;
    // multiplying and substracting
    int result = middle - (left * right);
    printf("Result: %d", result);
    return 0;
}