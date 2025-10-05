//Write a program in C to check whether a character is an alphabet or not
#include <stdio.h>

int main()
{
    char ch;

    // Input a character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet (A-Z or a-z)
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("'%c' is an alphabet.\n", ch);
    }
    else
    {
        printf("'%c' is NOT an alphabet.\n", ch);
    }

    return 0;
}
