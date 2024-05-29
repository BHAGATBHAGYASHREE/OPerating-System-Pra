#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src = fopen("example.txt", "r");
    FILE *dst = fopen("file3.txt", "w");
    if (!src || !dst) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), src)) {
        fputs(buffer, dst);
    }

    fclose(src);
    fclose(dst);

    printf("Copied contents from source.txt to destination.txt\n");

    return 0;
}

