#include<stdio.h>
#include<limits.h>
void acceptArrayElements(int arr[], int size) {
    int i;
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printArrayElements(int arr[], int size) {
    int i;
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int findMaxElement(int arr[], int size) {
    int max = INT_MIN; // Initialize max with the smallest possible integer value

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }

    return max;
}
int main() {
    int arr[5];
    acceptArrayElements(arr, 5);
    printf("Original array: ");
    printArrayElements(arr, 5);

    int max = findMaxElement(arr, 5);
    printf("Maximum element: %d\n", max);

    return 0;
}
