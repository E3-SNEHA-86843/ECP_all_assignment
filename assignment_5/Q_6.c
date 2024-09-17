#include<stdio.h>
int removeDuplicates(int arr[], int size) {
    int uniqueCount = 1; // Count of unique elements

    // Iterate through the array to find unique elements
    for (int i = 1; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break; // Element is already present, so break the loop
            }
        }
        if (j == i) {
            arr[uniqueCount++] = arr[i]; // Add unique element to the front
        }
    }

    return uniqueCount;
}
int main() {
    int arr[5] = {1, 2, 2, 3, 4};
    int size = 5;

    int uniqueCount = removeDuplicates(arr, size);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
