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

// Function to accept array of student's information from the user
void acceptStudentInfoArray(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter student %d's roll number: ", i + 1);
        scanf("%d", &students[i].roll_number);

        printf("Enter student %d's name: ", i + 1);
        scanf("%49s", students[i].name); // leave space for null terminator

        printf("Enter student %d's marks type (1 for integer, 2 for float): ", i + 1);
        scanf("%d", &students[i].choice);

        if (students[i].choice == 1) {
            printf("Enter student %d's integer marks: ", i + 1);
            scanf("%d", &students[i].marks.int_marks);
        } else if (students[i].choice == 2) {
            printf("Enter student %d's float marks: ", i + 1);
            scanf("%f", &students[i].marks.float_marks);
        }
    }
}

// Function to print array of student's information
void printStudentInfoArray(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d Information:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);

        if (students[i].choice == 1) {
            printf("Marks (Integer): %d\n", students[i].marks.int_marks);
        } else if (students[i].choice == 2) {
            printf("Marks (Float): %.2f\n", students[i].marks.float_marks);
        }
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student students[size];

    // Accept array of student's information from the user
    acceptStudentInfoArray(students, size);

    // Print the array of student's information
    printStudentInfoArray(students, size);

    return 0;
}
