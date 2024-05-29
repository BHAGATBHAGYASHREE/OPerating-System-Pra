#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("hello.txt", "w");
    if (!file) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "Hello, World!\n");
    fclose(file);

    printf("Written 'Hello, World!' to hello.txt\n");

    return 0;
}

