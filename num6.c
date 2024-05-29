#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("example.txt", "a");
    if (!file) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "End of File\n");
    fclose(file);

    printf("Appended 'End of File' to example.txt\n");

    return 0;
}

