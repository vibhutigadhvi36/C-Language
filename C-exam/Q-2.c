// Function to calculate sum of array elements
#include <stdio.h>

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

    int result = findSum(arr, n);

    printf("Sum of elements = %d\n", result);
    return 0;
}
