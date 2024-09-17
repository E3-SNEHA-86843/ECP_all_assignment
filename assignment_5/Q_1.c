#include <stdio.h>

int main() {
    int marks[5]; // 1D array to store marks of 5 subjects
    int i, total = 0;

    // Accept marks of 5 subjects
    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i]; // calculate total
    }

    // Calculate average
    float average = (float)total / 5;

    // Display total and average
    printf("\nTotal: %d\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}
