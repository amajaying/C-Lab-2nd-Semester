// bill format
#include <stdio.h>
int main()
{
    char c = '\0';
    printf("Item No%5cName%10cPrice", c, c);
    printf("\n10%12cxyp%10c$1929.63", c, c);
    printf("\n120%10cmptm%10c$26.30", c, c);
    printf("\n10%8cxyp%10c$1929.63", c, c);
    printf("\n10%12cxyp%13c$1929.63", c, c);
}