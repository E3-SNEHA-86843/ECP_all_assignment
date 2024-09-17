#include<stdio.h>
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

void findMinMaxElements(int arr[], int size, int* max, int* min) {
    *max = arr[0]; // Initialize max with the first element
    *min = arr[0]; // Initialize min with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i]; // Update max if a larger element is found
        }
        if (arr[i] < *min) {
            *min = arr[i]; // Update min if a smaller element is found
        }
    }
}
int main() {
    int arr[5];
    acceptArrayElements(arr, 5);
    printf("Original array: ");
    printArrayElements(arr, 5);

    int max, min;
    findMinMaxElements(arr, 5, &max, &min);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
