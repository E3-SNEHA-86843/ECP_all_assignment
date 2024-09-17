#include<stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 3;

    int index = linearSearch(arr, size, target);
    if (index != -1) {
        printf("Target element found at index %d\n", index);
    } else {
        printf("Target element not found in the array\n");
    }

    return 0;
}
