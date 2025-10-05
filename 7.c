//Write a program in C to check leap year. Evaluate all the cases

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year <= 0) {
        printf("Invalid year! Year should be greater than 0.\n");
    }
    else if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d is NOT a leap year (century year not divisible by 400).\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}
