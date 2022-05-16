#include <stdio.h>
int main()
{
    int ar[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int a, b, c, d;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            a = a + ar[i][j];
            c = c + ar[i + 2][j + 2];
        }
    }

    int k;

    for (int i = 2; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                k = 2;
            }
            if (j == 1)
            {
                k = 3;
            }
            b=b+ar[i][j];
            d=d+ar[i-2][k];
            
        }
    }

    printf("%d %d\n",a,d);
    printf("%d %d",b,c);
}
