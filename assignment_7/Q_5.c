#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

// Function to accept names of students
void acceptStudentNames(char **students) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        students[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i], MAX_NAME_LENGTH, stdin);
        students[i][strcspn(students[i], "\n")] = 0; // remove newline character
    }
}

// Function to print names of students
void printStudentNames(char **students) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, students[i]);
    }
}

// Function to sort student names in alphabetical order
void sortStudentNames(char **students) {
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = i + 1; j < MAX_STUDENTS; j++) {
            if (strcmp(students[i], students[j]) > 0) {
                char *temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

// Function to free memory allocated for student names
void freeStudentNames(char **students) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        free(students[i]);
    }
}

int main() {
    char **students = (char **)malloc(MAX_STUDENTS * sizeof(char *));

    printf("Enter names of students:\n");
    acceptStudentNames(students);

    printf("Student names:\n");
    printStudentNames(students);

    printf("Sorting student names...\n");
    sortStudentNames(students);

    printf("Sorted student names:\n");
    printStudentNames(students);

    printf("Freeing memory...\n");
    freeStudentNames(students);
    free(students);

    return 0;
}
