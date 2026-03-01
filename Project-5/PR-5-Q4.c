#include <stdio.h>

int main()
{
    int r, c, i, j;
    int a[50][50];
    int rowSum, colSum;

    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    printf("\nEnter array's elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nSum of each row:\n");

    for (i = 0; i < r; i++)
    {
        rowSum = 0;

        for (j = 0; j < c; j++)
        {
            rowSum = rowSum + a[i][j];
        }

        printf("Row %d = %d\n", i, rowSum);
    }

    printf("\nSum of each column:\n");

    for (j = 0; j < c; j++)
    {
        colSum = 0;

        for (i = 0; i < r; i++)
        {
            colSum = colSum + a[i][j];
        }

        printf("Column %d = %d\n", j, colSum);
    }

    return 0;
}
