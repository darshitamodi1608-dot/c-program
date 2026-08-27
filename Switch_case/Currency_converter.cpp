/* Currency Converter */
#include <stdio.h>

int main()
{
    float amount;
    int c;

    printf("Enter amount in INR : ");
    scanf("%f", &amount);

    printf("\n1. Convert to USD");
    printf("\n2. Convert to Euro");
    printf("\n3. Convert to Pound");
    printf("\n4. Convert to Japanese Yen");

    printf("\nEnter your choice: ");
    scanf("%d", &c);

    switch(c)
    {
        case 1:
            amount = amount * 0.012;
            printf("\nConverted amount in USD : %.2f", amount);
            break;

        case 2:
            amount = amount * 0.011;
            printf("\nConverted amount in Euro : %.2f", amount);
            break;

        case 3:
            amount = amount * 0.0095;
            printf("\nConverted amount in Pound : %.2f", amount);
            break;

        case 4:
            amount = amount * 1.68;
            printf("\nConverted amount in Japanese Yen : %.2f", amount);
            break;

        default:
            printf("\nInvalid choice");
    }

    return 0;
}
