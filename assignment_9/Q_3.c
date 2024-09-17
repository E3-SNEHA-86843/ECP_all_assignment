#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

// Function to copy file contents from source to destination
void copyFileContents(FILE* source, FILE* destination) {
    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, source) != NULL) {
        fputs(line, destination);
    }
}

// Function to display file contents
void displayFileContents(FILE* file) {
    char line[MAX_LINE_LENGTH];
    rewind(file); // rewind the file pointer to the beginning
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        printf("%s", line);
    }
}

int main() {
    FILE* source = fopen("source.txt", "r"); // open source file in read mode
    if (source == NULL) {
        printf("Could not open source file\n");
        return 1;
    }

    FILE* destination = fopen("destination.txt", "w"); // open destination file in write mode
    if (destination == NULL) {
        printf("Could not open destination file\n");
        fclose(source); // close source file
        return 1;
    }

    copyFileContents(source, destination); // copy contents from source to destination

    printf("Contents of destination file:\n");
    displayFileContents(destination); // display contents of destination file

    char userInput[MAX_LINE_LENGTH];
    printf("Enter data to write to destination file: ");
    fgets(userInput, MAX_LINE_LENGTH, stdin); // read user input
    fprintf(destination, "%s", userInput); // write user input to destination file

    fclose(source); // close source file
    fclose(destination); // close destination file

    return 0;
}
