#include <stdio.h>

// Function to copy file contents from source to destination
void copyFileContents(FILE* source, FILE* destination) {
    char character;
    while ((character = fgetc(source)) != EOF) {
        fputc(character, destination);
    }
}

// Function to display file contents
void displayFileContents(FILE* file) {
    char character;
    rewind(file); // rewind the file pointer to the beginning
    while ((character = fgetc(file)) != EOF) {
        printf("%c", character);
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

    char userInput[256];
    printf("Enter data to write to destination file: ");
    fgets(userInput, 256, stdin); // read user input
    fprintf(destination, "%s", userInput); // write user input to destination file

    fclose(source); // close source file
    fclose(destination); // close destination file

    return 0;
}
