#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <string.h>
#include <dirent.h>

#define PORT 8080
#define BUF_SIZE 1024

void send_file_contents(int client_socket, char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        char error_msg[BUF_SIZE] = "File not found";
        send(client_socket, error_msg, strlen(error_msg), 0);
        return;
    }

    char buffer[BUF_SIZE];
    size_t bytes_read;
    while ((bytes_read = fread(buffer, 1, BUF_SIZE, file)) > 0) {
        send(client_socket, buffer, bytes_read, 0);
    }

    fclose(file);
}

void send_file_list(int client_socket) {
    DIR *dir;
    struct dirent *ent;
    char file_list[BUF_SIZE] = "";

    if ((dir = opendir(".")) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            if (ent->d_type == DT_REG) {
                strcat(file_list, ent->d_name);
                strcat(file_list, "\n");
            }
        }
        closedir(dir);
    } else {
        perror("opendir failed");
        exit(EXIT_FAILURE);
    }

    send(client_socket, file_list, strlen(file_list), 0);
}

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    socklen_t addr_len = sizeof(address);
    char buffer[BUF_SIZE] = {0};

    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("bind failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    if (listen(server_fd, 3) < 0) {
        perror("listen");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    printf("Server listening on port %d...\n", PORT);

    while (1) {
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address, &addr_len)) < 0) {
            perror("accept");
            close(server_fd);
            exit(EXIT_FAILURE);
        }

        // Send file list
        send_file_list(new_socket);

        while (1) {
            read(new_socket, buffer, BUF_SIZE);
            if (strcmp(buffer, "exit") == 0) {
                printf("Client has closed connection\n");
                close(new_socket);
                break;
            }

            printf("File requested by client: %s\n", buffer);
            send_file_contents(new_socket, buffer);
        }
    }

    close(server_fd);
    return 0;
}

