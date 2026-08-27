/* Cab Fare calulator */
#include <stdio.h>
int main()
{
    int c;
    printf("----RECHARGE PLANS----: ");
    printf("\n1.  Rs 199 (1.5GB/day, 28 days)  ");
    printf("\n2.  Rs 399 (2GB/day, 56 days) ");
    printf("\n3.  Rs 599 (3GB/day, 84 days) ");
    printf("\n4.  Rs 999 (Unlimited Data, 365 days) ");
    printf("\nEnter your choice: ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            printf("\nPlan Details: 1.5GB/day, Validity: 28 days  " );
            break;

        case 2:
            printf("\nPlan Details: 2GB/day, Validity: 56 days  " );
           break;
        case 3:
            printf("\nPlan Details: 3GB/day, Validity: 84 days  " );
            break;

        case 4:
           printf("\nPlan Details: Unlimited data, Validity: 365 days   ");
            break;
        default:
            printf("\nInvalid choice");
    }

    return 0;
}
