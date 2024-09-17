#include<stdio.h>
int* linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return &arr[i]; // Return the address of the target element
        }
    }
    return NULL; // Return NULL if the target element is not found
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 3;

    int* address = linearSearch(arr, size, target);
    if (address != NULL) {
        printf("Target element found at address %p\n", address);
    } else {
        printf("Target element not found in the array\n");
    }

    return 0;
}
