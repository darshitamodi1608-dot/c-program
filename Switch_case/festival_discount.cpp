/* Festival discount offer */
#include <stdio.h>
int main()
{   float amount;
    int c;
    printf("Enter product price : ");
    scanf("%f", &amount);
    printf("---- Festival Discount Offer----: ");
    printf("\n1.  Diwali : 30 percent off  ");
    printf("\n2.  Holi : 25 percent off  ");
    printf("\n3.  Christmas : 5  percent off  ");
    printf("\n4.  New Year : 2.5 percent off ");
    printf("\nEnter your choice: ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            amount = amount -(amount*0.30);
            printf("\nTotal Fare: : %.2f", amount);
            break;

        case 2:
            amount = amount -(amount*0.25);
            printf("\nTotal Fare: : %.2f", amount);
            break;
        case 3:
            amount = amount -(amount*0.05);
            printf("\nTotal Fare: : %.2f", amount);
            break;

        case 4:
            amount = amount -(amount*0.025);
            printf("\nTotal Fare: : %.2f", amount);
            break;
        default:
            printf("\nInvalid choice");
    }

    return 0;
}
