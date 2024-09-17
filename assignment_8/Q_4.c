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

// Function prototypes
void acceptStudentInfoArray(struct Student students[], int size);
void printStudentInfo(struct Student student);
struct Student* searchByRollNumber(struct Student students[], int size, int roll_number);
struct Student* searchByName(struct Student students[], int size, char name[]);

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

// Function to print student's information
void printStudentInfo(struct Student student) {
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s\n", student.name);

    if (student.choice == 1) {
        printf("Marks (Integer): %d\n", student.marks.int_marks);
    } else if (student.choice == 2) {
        printf("Marks (Float): %.2f\n", student.marks.float_marks);
    }
}

// Function to search student's information by roll number
struct Student* searchByRollNumber(struct Student students[], int size, int roll_number) {
    for (int i = 0; i < size; i++) {
        if (students[i].roll_number == roll_number) {
            return &students[i];
        }
    }
    return NULL; // not found
}

// Function to search student's information by name
struct Student* searchByName(struct Student students[], int size, char name[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return &students[i];
        }
    }
    return NULL; // not found
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student students[size];

    // Accept array of student's information from the user
    acceptStudentInfoArray(students, size);

    int roll_number;
    printf("Enter the roll number to search: ");
    scanf("%d", &roll_number);

    struct Student* found_student = searchByRollNumber(students, size, roll_number);
    if (found_student != NULL) {
        printf("Student found:\n");
        printStudentInfo(*found_student);
    } else {
        printf("Student not found\n");
    }

    char name[50];
    printf("Enter the name to search: ");
    scanf("%49s", name); // leave space for null terminator

    found_student = searchByName(students, size, name);
    if (found_student != NULL) {
        printf("Student found:\n");
        printStudentInfo(*found_student);
    } else {
        printf("Student not found\n");
    }

    return 0;
}
