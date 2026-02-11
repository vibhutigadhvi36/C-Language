// PR-5 Q-1
#include <stdio.h>

int main()
{
    int n, i;
    int a[5];  

    printf("Enter the array's size: ");
    scanf("%d", &n);

    printf("Enter array's elements:\n");

    for (i = 0; i < n; i++)  
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nNegative elements from an Array: ");

    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]); 
        }
    }

    return 0;
}