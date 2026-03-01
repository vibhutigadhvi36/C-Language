
// PR-5 Q-3 

#include <stdio.h>

int main()
{
    int r, c, i, j;
    int a[50][50], t[50][50];

    printf("Enter the array's row & column size: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter array's elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("\nTranspose Matrix:\n");

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
