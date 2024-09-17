#include<stdio.h>
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Return the index of the target element
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if the target element is not found
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 3;

    int index = binarySearch(arr, size, target);
    if (index != -1) {
        printf("Target element found at index %d\n", index);
    } else {
        printf("Target element not found in the array\n");
    }

    return 0;
}
