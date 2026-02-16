// Revers 1D array elements 
#include <stdio.h>

void 
    printReverse(int arr[], int size) {
    printf("Array elements in reverse order:\n");
    
    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findSum(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printReverse(arr, n);

    int total = findSum(arr, n);
    printf("Sum of all elements = %d\n", total);

    return 0; 
} 
