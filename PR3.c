// Question:- 1
#include <stdio.h>

int main() {
    char ch = 'a';
    printf("Output: ");
    do {
        printf("%c ", ch);
        ch = ch + 4;
    } while (ch <= 'z');

    printf("\n\n");

//  Question - 2
    int num, count = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    int temp = num;

    do {
        count++;
        temp = temp / 10;
    } while (temp != 0);

    printf("Total number of digits: %d\n\n", count);

// Que:- 3
    int number, firstDigit, lastDigit, sum;

    printf("Enter any number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    while (number >= 10) {
        number = number / 10;
    }

    firstDigit = number;
    sum = firstDigit + lastDigit;

    printf("The sum of the first and the last digit: %d", sum);

    return 0;
}
