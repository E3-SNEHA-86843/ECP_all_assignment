#include <stdio.h>
#include <string.h>

// Define a union to store either a grade or a percentage
union Result {
    char grade; // for grades A, B, C
    float percentage; // for percentage
};

// Define a structure to store student information
struct Student {
    int standard; // standard of the student (1-12)
    char name[50];
    union Result result;
    int is_percentage; // flag to indicate whether the result is a percentage or a grade
};

// Function to accept student information from the user
void acceptStudentInfo(struct Student* student) {
    printf("Enter student's name: ");
    scanf("%49s", student->name); // leave space for null terminator

    printf("Enter student's standard (1-12): ");
    scanf("%d", &student->standard);

    if (student->standard <= 4) {
        printf("Enter student's grade (A/B/C): ");
        scanf(" %c", &student->result.grade);
        student->is_percentage = 0;
    } else {
        printf("Enter student's percentage: ");
        scanf("%f", &student->result.percentage);
        student->is_percentage = 1;
    }
}

// Function to display student information
void displayStudentInfo(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Standard: %d\n", student.standard);

    if (student.is_percentage) {
        printf("Result: %.2f%%\n", student.result.percentage);
    } else {
        printf("Result: %c\n", student.result.grade);
    }
}

int main() {
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter information for student %d:\n", i + 1);
        acceptStudentInfo(&students[i]);
    }

    printf("Student information:\n");
    for (int i = 0; i < 3; i++) {
        displayStudentInfo(students[i]);
        printf("\n");
    }

    return 0;
}
