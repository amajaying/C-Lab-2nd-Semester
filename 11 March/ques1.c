// Create a Bill question

#include <stdio.h>

int main()
{
    int q1, q2, q3;
    float c1, c2, c3;
    printf("Enter the first product quantity and cost: ");
    scanf("%d%f", &q1, &c1);
    printf("Enter the second product quantity and cost: ");
    scanf("%d%f", &q2, &c2);
    printf("Enter the third product quantity and cost: ");
    scanf("%d%f", &q3, &c3);

    // calculations
    int cost1 = q1 * c1;
    int dcost1 = cost1 * 0.9;

    int cost2 = q2 * c2;
    int dcost2 = cost2 * 0.8;

    int cost3 = q3 * c3;

    int total = cost1 + cost2 + cost3;
    int dtotal = total * 0.6;

    // now print the bill
    printf("****************************************************\n");
    printf("                   AMAJAYING STORE                  \n");
    printf("****************************************************\n");
    printf("S.N\tName\t\tQty\tRate\t\tCost");
    printf("\n1\tProduct 1\t%d\t%f\t%d", q1, c1, cost1);
    printf("\n2\tProduct 2\t%d\t%f\t%d", q2, c2, cost2);
    printf("\n3\tProduct 3\t%d\t%f\t%d\n", q3, c3, cost3);
    printf("\n\t\t\t\tTotal: %d", total);
    printf("\n\t\t\t\tNet Price: %d\n", dtotal);
    printf("****************************************************\n");
    return 0;
}