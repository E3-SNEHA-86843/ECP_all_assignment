#include <stdio.h>

// Function to read a file character by character and display its content
void displayFileContent(const char* filename) {
    FILE* file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Could not open file \n");
        return;
    }

    char character;
    while ((character = fgetc(file)) != EOF) {
        printf("%c", character);
    }

    fclose(file);
}

int main() {
    const char* filename = "file.txt"; 
    displayFileContent(filename);
    return 0;
}
