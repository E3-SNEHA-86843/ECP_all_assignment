#include <stdio.h>
#include <string.h>
// Enumeration for menu options
typedef enum {
    WRITE_RECORD,
    READ_RECORD,
    SEARCH_BY_ROLL,
    SEARCH_BY_NAME,
    MODIFY_RECORD,
    REMOVE_RECORD,
    EXIT
} MenuOption;

// Structure to represent a student
typedef struct {
    int roll;
    char name[50];
    float gpa;
} Student;

// Function to write a student's record to a binary file
void writeRecord(FILE* file, Student student) {
    fwrite(&student, sizeof(Student), 1, file);
}

// Function to read a student's record from a binary file
Student readRecord(FILE* file) {
    Student student;
    fread(&student, sizeof(Student), 1, file);
    return student;
}

// Function to search for a student's record by roll number
void searchByRoll(FILE* file, int roll) {
    Student student;
    fseek(file, 0, SEEK_SET); // rewind file pointer
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.roll == roll) {
            printf("Record found:\n");
            printf("Roll: %d\n", student.roll);
            printf("Name: %s\n", student.name);
            printf("GPA: %.2f\n", student.gpa);
            return;
        }
    }
    printf("Record not found.\n");
}

// Function to search for a student's record by name
void searchByName(FILE* file, char* name) {
    Student student;
    fseek(file, 0, SEEK_SET); // rewind file pointer
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (strcmp(student.name, name) == 0) {
            printf("Record found:\n");
            printf("Roll: %d\n", student.roll);
            printf("Name: %s\n", student.name);
            printf("GPA: %.2f\n", student.gpa);
            return;
        }
    }
    printf("Record not found.\n");
}

// Function to modify a student's record
void modifyRecord(FILE* file, int roll, Student newStudent) {
    Student student;
    fseek(file, 0, SEEK_SET); // rewind file pointer
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.roll == roll) {
            fseek(file, -sizeof(Student), SEEK_CUR); // move file pointer back
            fwrite(&newStudent, sizeof(Student), 1, file);
            printf("Record modified successfully.\n");
            return;
        }
    }
    printf("Record not found.\n");
}

// Function to remove a student's record
void removeRecord(FILE* file, int roll) {
    Student student;
    FILE* tempFile = fopen("temp.dat", "wb"); // create temporary file
    fseek(file, 0, SEEK_SET); // rewind file pointer
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.roll != roll) {
            fwrite(&student, sizeof(Student), 1, tempFile);
        }
    }
    fclose(file);
    fclose(tempFile);
    remove("students.dat"); // remove original file
    rename("temp.dat", "students.dat"); // rename temporary file
    printf("Record removed successfully.\n");
}

int main() {
    FILE* file = fopen("students.dat", "ab+"); // open file in append and read mode
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    int choice;
    while (1) {
        printf("Student Database Menu:\n");
        printf("1. Write student's record\n");
        printf("2. Read student's record\n");
        printf("3. Search student's record by roll number\n");
        printf("4. Search student's record by name\n");
        printf("5. Modify student's record\n");
        printf("6. Remove student's record\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case WRITE_RECORD:
                Student student;
                printf("Enter roll number: ");
                scanf("%d", &student.roll);
                printf("Enter name: ");
                scanf("%s", student.name);
                printf("Enter GPA: ");
                scanf("%f", &student.gpa);
                writeRecord(file, student);
                break;
            case READ_RECORD:
                Student readStudent;
                fseek(file, 0, SEEK_SET); // rewind file pointer
                while (fread(&readStudent, sizeof(Student), 1, file) == 1) {
                    printf("Roll: %d\n", readStudent.roll);
                    printf("Name: %s\n", readStudent.name);
                    printf("GPA: %.2f\n", readStudent.gpa);
                }
                break;
            case SEARCH_BY_ROLL:
                int roll;
                printf("Enter roll number to search: ");
                scanf("%d", &roll);
                searchByRoll(file, roll);
                break;
            case SEARCH_BY_NAME:
                char name[50];
                printf("Enter name to search: ");
                scanf("%s", name);
                searchByName(file, name);
                break;
            case MODIFY_RECORD:
                int rollToModify;
                printf("Enter roll number to modify: ");
                scanf("%d", &rollToModify);
                Student newStudent;
                printf("Enter new name: ");
                scanf("%s", newStudent.name);
                printf("Enter new GPA: ");
                scanf("%f", &newStudent.gpa);
                modifyRecord(file, rollToModify, newStudent);
                break;
            case REMOVE_RECORD:
                int rollToRemove;
                printf("Enter roll number to remove: ");
                scanf("%d", &rollToRemove);
                removeRecord(file, rollToRemove);
                break;
            case EXIT:
                fclose(file);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
