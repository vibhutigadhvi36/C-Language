#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0;
    int flag = 1;

    // Input string
    printf("Enter any string: ");
    scanf("%s", str);

    // Find length manually
    while (str[len] != '\0')
    {
        len++;
    }

    // Check palindrome
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    // Output result
    if (flag == 1)
    {
        printf("The given string is a Palindrome.");
    }
    else
    {
        printf("The given string is not a Palindrome.");
    }

    return 0;
}
