#include <stdio.h>

// Define a union to store either an integer or a float value
union Marks {
    int int_marks;
    float float_marks;
};

// Define a structure to store student information
struct Student {
    int roll_number;
    char name[50];
    union Marks marks;
    int choice; // to store the choice of marks type
};

int main() {
    struct Student student;

    // Accept student information from the user
    printf("Enter student's roll number: ");
    scanf("%d", &student.roll_number);

    printf("Enter student's name: ");
    scanf("%49s", student.name); // leave space for null terminator

    printf("Enter student's marks type (1 for integer, 2 for float): ");
    scanf("%d", &student.choice);

    if (student.choice == 1) {
        printf("Enter student's integer marks: ");
        scanf("%d", &student.marks.int_marks);
    } else if (student.choice == 2) {
        printf("Enter student's float marks: ");
        scanf("%f", &student.marks.float_marks);
    }

    // Print the student's information
    printf("Student Information:\n");
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s\n", student.name);

    if (student.choice == 1) {
        printf("Marks (Integer): %d\n", student.marks.int_marks);
    } else if (student.choice == 2) {
        printf("Marks (Float): %.2f\n", student.marks.float_marks);
    }

    return 0;
}
