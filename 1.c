#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("Enter Arithmetic Operation (+, -, *, /): ");
    scanf(" %c", &op);      

    switch (op)
    {
        case '+':
            printf("Addition of a and b is: %d\n", a + b);
            break;
        case '-':
            printf("Subtraction of a and b is: %d\n", a - b);
            break;
        case '*':
            printf("Multiplication of a and b is: %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Division of a and b is: %d\n", a / b);
            else
                printf("Error: Division by zero is not allowed!\n");
            break;
        default:
            printf("Invalid Operation\n");
    }

    return 0;
}
