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
int main() {
    int arr[5];
    acceptArrayElements(arr, 5);
    printArrayElements(arr, 5);
    return 0;
}
