#include <stdio.h>

int main() {
    const char *filename = "example.txt";
    FILE *file = fopen(filename, "r");

    if (file) {
        printf("File %s exists.\n", filename);
        fclose(file);
    } else {
        printf("File %s does not exist.\n", filename);
    }

    return 0;
}

