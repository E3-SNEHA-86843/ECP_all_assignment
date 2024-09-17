#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

// Function to accept names of students
void acceptStudentNames(char students[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i], MAX_NAME_LENGTH, stdin);
        students[i][strcspn(students[i], "\n")] = 0; // remove newline character
    }
}

// Function to print names of students
void printStudentNames(char students[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, students[i]);
    }
}

// Function to sort student names in alphabetical order
void sortStudentNames(char students[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = i + 1; j < MAX_STUDENTS; j++) {
            if (strcmp(students[i], students[j]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, students[i]);
                strcpy(students[i], students[j]);
                strcpy(students[j], temp);
            }
        }
    }
}

int main() {
    char students[MAX_STUDENTS][MAX_NAME_LENGTH];

    printf("Enter names of students:\n");
    acceptStudentNames(students);

    printf("Student names:\n");
    printStudentNames(students);

    printf("Sorting student names...\n");
    sortStudentNames(students);

    printf("Sorted student names:\n");
    printStudentNames(students);

    return 0;
}
