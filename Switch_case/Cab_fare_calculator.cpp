/* Cab Fare calulator */
#include <stdio.h>
int main()
{
    int amount;
    int c;
    printf("Enter distance : ");
    scanf("%d", &amount);
    printf("\n1. Mini Cab ");
    printf("\n2.  Sedan ");
    printf("\n3.   Luxury Car ");
    printf("\n4.  SUV ");
    printf("\nEnter your choice: ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            amount = amount +10;
            printf("\nTotal Fare: : %d", amount);
            break;

        case 2:
            amount = amount * 15;
            printf("\nTotal Fare: : %d", amount);
            break;

        case 3:
            amount = amount * 20;
            printf("\nTotal Fare: : %d", amount);
            break;

        case 4:
            amount = amount * 30;
            printf("\nTotal Fare:: %d", amount);
            break;

        default:
            printf("\nInvalid choice");
    }

    return 0;
}
