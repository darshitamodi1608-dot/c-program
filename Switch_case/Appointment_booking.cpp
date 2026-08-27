/* Cab Fare calulator */
#include <stdio.h>
int main()
{
    int c;
    printf("----Chose department----: ");
    printf("\n1.  General Physician  ");
    printf("\n2.  Cardiologist ");
    printf("\n3.  Dermatologist ");
    printf("\n4.  Neurologist  ");
    printf("\nEnter your choice: ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            printf("\nGeneral Physician  is available from 10 AM to 3 PM." );
            break;

        case 2:
            printf("\nCardiologist is available from 11 AM to 4 PM." );
            break;
        case 3:
            printf("\nDermatologist is available from 12 AM to 2 PM." );
            break;

        case 4:
           printf("\nNeurologist  is available from 6 AM to 6 PM. ");
            break;
        default:
            printf("\nInvalid choice");
    }

    return 0;
}
