// Take a string and display in the following format
//  ABCD PKLD NT  VPR
// Abcd P. N. Vpr

#include <stdio.h>
int main()
{
    char a[50];
    int spc = 0;
    scanf("%[^\n]s", a);

    int i, j, k = 0;

    while (a[spc] != ' ')
    {
        spc++;
    }

    for (int i = 0; i < spc; i++)
    {
        printf("%c", a[i]);
    }
    printf(" ");

    int r = 0;
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }

    for (int i = count - 1; a[i] != '\0'; i++)
    {
        k++;
    }
    for (int i = count - 1; a[i] != ' '; i--)
        {
            r++;
        }
        
         
        for (i = spc; i<count-r-1; i++)
        {
            if (a[i] == ' ')
            {
                printf("%c. ", a[i + 1]);
            }
        }
    
    for (int j = count - r; j < count; j++)
    {
        printf("%c", a[j]);
    }
    return 0;
}
