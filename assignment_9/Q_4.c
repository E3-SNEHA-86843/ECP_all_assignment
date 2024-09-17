#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    const char* sourceFilename = argv[1];
    const char* destinationFilename = argv[2];

    FILE* source = fopen(sourceFilename, "r"); // open source file in read mode
    if (source == NULL) {
        printf("Could not open source file '%s'\n", sourceFilename);
        return 1;
    }

    FILE* destination = fopen(destinationFilename, "w"); // open destination file in write mode
    if (destination == NULL) {
        printf("Could not open destination file '%s'\n", destinationFilename);
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
