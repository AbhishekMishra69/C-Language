//Write a program in C to check whether a number is positive or negative
#include <stdio.h>

int main()
{
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check conditions
    if (num > 0)
    {
        printf("%d is a positive number.\n", num);
    }
    else if (num < 0)
    {
        printf("%d is a negative number.\n", num);
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}
