#include <stdio.h>

// Define a structure to store student information
struct Student {
    unsigned int standard : 4; // standard of the student (1-12), 4 bits
    unsigned int age : 5; // age of the student (1-32), 5 bits
    unsigned int gender : 1; // gender of the student (0 for male, 1 for female), 1 bit
    char name[50]; // name of the student
};

// Function to accept student information from the user

void acceptStudentInfo(struct Student* student) {
    printf("Enter student's name: ");
    scanf("%49s", student->name); // leave space for null terminator

    unsigned int temp_age;
    printf("Enter student's age (1-32): ");
    scanf("%u", &temp_age);
    student->age = temp_age;

    unsigned int temp_standard;
    printf("Enter student's standard (1-12): ");
    scanf("%u", &temp_standard);
    student->standard = temp_standard;

    unsigned int temp_gender;
    printf("Enter student's gender (0 for male, 1 for female): ");
    scanf("%u", &temp_gender);
    student->gender = temp_gender;
}
// Function to display student information
void displayStudentInfo(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %u\n", student.age);
    printf("Standard: %u\n", student.standard);
    printf("Gender: %s\n", student.gender ? "Female" : "Male");
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
