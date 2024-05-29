
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (!file) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    int lines = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(file);

    printf("Number of lines: %d\n", lines);

    return 0;
}

