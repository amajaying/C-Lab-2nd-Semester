// take 3 items and price and provide discount as per given in the question
#include <stdio.h>
int main()
{
    int p1, q1, p2, q2, p3, q3, t1, t2, t3, netamt;
    printf("Enter the price and quantity of 1st item: ");
    scanf("%d%d", &p1, &q1);
    printf("Enter the price and quantity of 2nd item: ");
    scanf("%d%d", &p2, &q2);
    printf("Enter the price and quantity of 3rd item: ");
    scanf("%d%d", &p3, &q3);

    // giving discounts in unit price

    if (p1 > 5000)
    {
        p1 = p1 * 0.8;
    }
    if (p1 > 3000)
    {
        p1 = p1 * 0.9;
    }
    if (p1 > 1000)
    {
        p1 = p1 * 0.95;
    }

    if (p2 > 5000)
    {
        p2 = p2 * 0.8;
    }
    if (p2 > 3000)
    {
        p2 = p2 * 0.9;
    }
    if (p2 > 1000)
    {
        p2 = p2 * 0.95;
    }

    if (p3 > 5000)
    {
        p3 = p3 * 0.8;
    }
    if (p3 > 3000)
    {
        p3 = p3 * 0.9;
    }
    if (p3 > 1000)
    {
        p3 = p3 * 0.95;
    }

    // finding total cost
    t1 = q1 * p1;
    t2 = q2 * p2;
    t3 = q3 * p3;

    // giving discounts in total price
    if (q1 > 5)
    {
        t1 = t1 * 0.98;
    }
    if (q1 > 20)
    {
        t1 = t1 * 0.96;
    }
    if (q1 > 30)
    {
        t1 = t1 * 0.9;
    }

    if (q2 > 5)
    {
        t2 = t2 * 0.98;
    }
    if (q2 > 20)
    {
        t2 = t2 * 0.96;
    }
    if (q2 > 30)
    {
        t2 = t2 * 0.9;
    }

    if (q3 > 5)
    {
        t3 = t3 * 0.98;
    }
    if (q3 > 20)
    {
        t3 = t3 * 0.96;
    }
    if (q3 > 30)
    {
        t3 = t3 * 0.9;
    }

    int gross = t1 + t2 + t3;
    // discount in gross amount
    if (gross >= 10000)
    {
        netamt = gross * 0.97;
    }
    else
    {
        netamt = gross;
    }

    printf("----------------------------Bill----------------------------\n");
    printf("S.N.\tQuantity\tPrice\tTotal\n");
    printf("1.\t%d\t\t%d\t%d\n", q1, p1, t1);
    printf("2.\t%d\t\t%d\t%d\n", q2, p2, t2);
    printf("3.\t%d\t\t%d\t%d\n", q3, p3, t3);
    printf("------------------------------------------------------------\n");
    printf("Gross Amount = %d\n", gross);
    printf("Net Amount = %d", netamt);
    return 0;
}
