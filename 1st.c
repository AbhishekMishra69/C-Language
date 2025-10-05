#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Simple Calculator\n");
    printf("Enter Value to Perform Airthmetic Operation\n");
    scanf("%d%d",&num1,&num2);
    printf("Enter an expression +, -, *, or /: ");
    scanf("%c",&op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %d \n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result: %d\n", result);
            break;
        default:
            printf("Error: Invalid operator '%c'. Please use +, -, *, or /.\n", op);
    }

    return 0;
}
