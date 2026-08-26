/* Simple Calculator using Switch Case */
#include <stdio.h>
int main()
{   int a, b;
    char op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &b);
    switch(op)
    {
        case '+':
            printf("Addition = %d", a + b);
            break;

        case '-':
            printf("Subtraction = %d", a - b);
            break;

        case '*':
            printf("Multiplication = %d", a * b);
            break;

        case '/':
            printf("Division = %d", a / b);
            break;

        case '%':
            printf("Remainder = %d", a % b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
