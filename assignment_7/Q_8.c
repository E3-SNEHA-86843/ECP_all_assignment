#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <name1> <name2> ...\n", argv[0]);
        return 1;
    }

    // Create a copy of the argv array to avoid modifying the original
    char **names = (char **)malloc((argc - 1) * sizeof(char *));
    for (int i = 1; i < argc; i++) {
        names[i - 1] = argv[i];
    }

    // Sort the names using qsort
    qsort(names, argc - 1, sizeof(char *), compare);

    printf("List of names in sorted order:\n");
    for (int i = 0; i < argc - 1; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    // Free the memory allocated for the names array
    free(names);

    return 0;
}
