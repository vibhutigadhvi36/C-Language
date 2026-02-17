#include <stdio.h>

int main() { 
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str; 

    while (*ptr != '\0') {
        if (*ptr != '\n') {   
            length++;
        }
        ptr++;
    }

    printf("The length of a string is: %d\n", length);

    return 0;
 
} 
