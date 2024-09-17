#include <stdio.h>
#include <string.h>

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

void printStudentInfo(struct Student student) {
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s\n", student.name);

    if (student.choice == 1) {
        printf("Marks (Integer): %d\n", student.marks.int_marks);
    } else if (student.choice == 2) {
        printf("Marks (Float): %.2f\n", student.marks.float_marks);
    }
}
// Function to sort array of student's information by roll number
void sortByRollNumber(struct Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].roll_number > students[j + 1].roll_number) {
                // Swap students[j] and students[j + 1]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to sort student's information by name
void sortByName(struct Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                // Swap students[j] and students[j + 1]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
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

    printf("Sorting by roll number...\n");
    sortByRollNumber(students, size);

    printf("Sorted array of students by roll number:\n");
    for (int i = 0; i < size; i++) {
        printStudentInfo(students[i]);
    }

    printf("Sorting by name...\n");
    sortByName(students, size);

    printf("Sorted array of students by name:\n");
    for (int i = 0; i < size; i++) {
        printStudentInfo(students[i]);
    }

    return 0;
}
