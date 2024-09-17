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
void reverseArrayElements(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        // Swap elements at start and end indices
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
int main() {
    int arr[5];
    acceptArrayElements(arr, 5);
    printf("Original array: ");
    printArrayElements(arr, 5);

    reverseArrayElements(arr, 5);
    printf("Reversed array: ");
    printArrayElements(arr, 5);

    return 0;
}
