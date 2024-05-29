#include <stdio.h>

int main() {
    FILE *file;

    // Read mode
    file = fopen("example.txt", "r");
    if (file) {
        printf("Opened in read mode\n");
        fclose(file);
    }

    // Write mode
    file = fopen("example.txt", "w");
    if (file) {
        printf("Opened in write mode\n");
        fclose(file);
    }

    // Append mode
    file = fopen("example.txt", "a");
    if (file) {
        printf("Opened in append mode\n");
        fclose(file);
    }

    // Read and update mode
    file = fopen("example.txt", "r+");
    if (file) {
        printf("Opened in read and update mode\n");
        fclose(file);
    }

    // Write and update mode
    file = fopen("example.txt", "w+");
    if (file) {
        printf("Opened in write and update mode\n");
        fclose(file);
    }

    return 0;
}

