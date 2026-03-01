// // PR-4 Q-1..
#include<stdio.h>

int main() {

    int i,j,n=41;
    printf("enter number:");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d ",40+j);
        }
        printf("\n");
    }
return 0;


// PR-4 Q-2..
#include<stdio.h>

    int num=11;
    printf("enter number:");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;

// PR-4 Q-3.. 
#include <stdio.h>
    int space;
     printf("enter number:");
    scanf("%d",&space);
    for (i = 5; i >= 1; i--)
    {

        for (space = 1; space < i; space++)
        {
            printf("  ");   
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;

// PR-4 Q-4 
#include <stdio.h>

 
    printf("enter number:");
    scanf("%d",&space);

    for (i = 5; i >= 1; i--)
    {
        for (space = 5; space > i; space--)
        {
            printf("  ");   
        }

        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;

// PR-4 Q-5
#include <stdio.h>

 
     printf("enter number:");
    scanf("%d",&space);

    for (i = 5; i >= 1; i--)
    {

        for (space = 1; space < i; space++)
        {
            printf("  ");   
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }

        for (j = 5 - 1; j >= i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;

// PR-4 Q-6 
#include <stdio.h> 

 
    printf("enter number:");
    scanf("%d",&space);
 
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (space = 1; space <= (n - i) * 4; space++)
        {
            printf(" ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;

// PR-4 Q-7 
#include <stdio.h>

    printf("enter number:");
    scanf("%d",&space);

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1)

                printf("* ");

            else if (i == 2 && (j == 1 || j == 5))

                printf("* ");

            else if (i == 3)

                printf("* ");

            else if ((i == 4 || i == 5) && j == 1)

                printf("* ");

            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}