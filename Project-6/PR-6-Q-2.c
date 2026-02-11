#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;

    // Input
    printf("Enter any string: ");
    scanf("%s", str);

    printf("\nFrequency of each letter:\n");

    // Count frequency
    for (i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        // Skip already counted characters
        if (str[i] == '0')
            continue;

        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '0';   // Mark as counted
            }
        }

        printf("%c => %d\n", str[i], count);
    }

    return 0;
}
