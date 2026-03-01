#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int choice;
    int n1, n2;

    while (1)   
    {
       
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        
        if (choice == 0)
        {
            printf("Thank you! Exiting...");
            break;
        }

        
        printf("Enter the first number: ");
        scanf("%d", &n1);

        printf("Enter the second number: ");
        scanf("%d", &n2);

        
        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d is %d", n1, n2, add(n1, n2));
            break;

        case 2:
            printf("Subtraction of %d and %d is %d", n1, n2, sub(n1, n2));
            break;

        case 3:
            printf("Multiplication of %d and %d is %d", n1, n2, mul(n1, n2));
            break;

        case 4:
            if (n2 != 0)
                printf("Division of %d and %d is %d", n1, n2, div(n1, n2));
            else
                printf("Division by zero is not allowed");
            break;

        case 5:
            if (n2 != 0)
                printf("Modulus of %d and %d is %d", n1, n2, mod(n1, n2));
            else
                printf("Modulus by zero is not allowed");
            break;

        default:
            printf("Invalid choice! Try again.");
        }
    }

    return 0;
} 
