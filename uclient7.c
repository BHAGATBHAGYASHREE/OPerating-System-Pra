#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <string.h>

#define PORT 8080
#define BUF_SIZE 1024

void receive_file(int sockfd, char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("File open failed");
        exit(EXIT_FAILURE);
    }

    char buffer[BUF_SIZE];
    size_t bytes_received;
    while ((bytes_received = recv(sockfd, buffer, BUF_SIZE, 0)) > 0) {
        fwrite(buffer, 1, bytes_received, file);
    }

    fclose(file);
}

int main() {
    int sockfd;
    struct sockaddr_in serv_addr;
    char buffer[BUF_SIZE] = {0};

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("socket creation error");
        exit(EXIT_FAILURE);
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        perror("invalid address or address not supported");
        exit(EXIT_FAILURE);
    }

    if (connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("connection failed");
        exit(EXIT_FAILURE);
    }

    printf("Enter the filename to request from server: ");
    fgets(buffer, BUF_SIZE, stdin);
    strtok(buffer, "\n");  // Remove newline character

    send(sockfd, buffer, strlen(buffer), 0);

    receive_file(sockfd, buffer);

    printf("File contents received and saved as %s\n", buffer);

    close(sockfd);
    return 0;
}

