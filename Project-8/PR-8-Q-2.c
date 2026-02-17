#include <stdio.h>

void cubeElements(int *ptr, int size)
{
    int i, j;

    printf("\nCubes of all elements:\n");

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("%d ", (*ptr) * (*ptr) * (*ptr));
            ptr++;  
        }
        printf("\n");
    }
}

int main()
{
    int size, i, j;
    int a[10][10];

    printf("Enter array's size: ");
    scanf("%d", &size);

    printf("\nEnter array elements:\n");

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    cubeElements(&a[0][0], size);

    return 0;
}
