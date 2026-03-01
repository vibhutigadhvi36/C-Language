//  cube of each elements of an 1D array using Pointer
#include <stdio.h>

int main() {

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr;

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;   

    printf("Cube of each element:\n");
    for(int i = 0; i < n; i++) {
        int cube = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
        printf("%d ", cube);
    }

    return 0;
}
