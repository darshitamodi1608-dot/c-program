/* Menu Driven Area Calculator */
#include <stdio.h>
int main()
{
    int choice;
    float r, l, b, base, height, area;

    printf("----- Area Calculator -----\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);

            area = 3.14 * r * r;
            printf("Area of Circle = %.2f", area);
            break;

        case 2:
            printf("Enter length: ");
            scanf("%f", &l);

            printf("Enter breadth: ");
            scanf("%f", &b);

            area = l * b;
            printf("Area of Rectangle = %.2f", area);
            break;

        case 3:
            printf("Enter base: ");
            scanf("%f", &base);

            printf("Enter height: ");
            scanf("%f", &height);

            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f", area);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
