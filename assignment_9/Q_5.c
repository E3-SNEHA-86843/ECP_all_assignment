#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

void writeStudentRecord(FILE* file, Student student) {
    fprintf(file, "%d %s %.2f\n", student.id, student.name, student.gpa);
}

Student readStudentRecord(FILE* file) {
    Student student;
    fscanf(file, "%d %s %f", &student.id, student.name, &student.gpa);
    return student;
}

int main() {
    FILE* file = fopen("students.txt", "w"); // open file in write mode
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    Student student1 = {1, "John Doe", 3.5};
    writeStudentRecord(file, student1);

    Student student2 = {2, "Jane Smith", 3.8};
    writeStudentRecord(file, student2);

    fclose(file); // close file

    file = fopen("students.txt", "r"); // open file in read mode
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    Student readStudent;
    while (fscanf(file, "%d %s %f", &readStudent.id, readStudent.name, &readStudent.gpa) == 3) {
        printf("ID: %d, Name: %s, GPA: %.2f\n", readStudent.id, readStudent.name, readStudent.gpa);
    }

    fclose(file); // close file

    return 0;
}
