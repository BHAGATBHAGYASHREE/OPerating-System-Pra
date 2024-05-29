#include <sys/select.h> // Include for select() function
#include <errno.h>      // Include for errno variable

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8080
#define MAX_CLIENTS 10
#define BUF_SIZE 1024

int main() {
    int sockfd, client_fds[MAX_CLIENTS], max_clients = 0;
    struct sockaddr_in servaddr, cliaddr;
    fd_set readfds;
    char buffer[BUF_SIZE];

    // Create UDP socket
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&servaddr, 0, sizeof(servaddr));

    // Fill server information
    servaddr.sin_family = AF_INET; // IPv4
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    // Bind the socket with the server address
    if (bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }

    printf("UDP server listening on port %d...\n", PORT);

    while (1) {
        FD_ZERO(&readfds); // Clear the set
        FD_SET(sockfd, &readfds); // Add the socket to the set

        // Add client sockets to the set
        for (int i = 0; i < max_clients; ++i) {
            if (client_fds[i] > 0) {
                FD_SET(client_fds[i], &readfds);
            }
        }

        int activity = select(FD_SETSIZE, &readfds, NULL, NULL, NULL);

        if ((activity < 0) && (errno != EINTR)) {
            perror("select error");
            exit(EXIT_FAILURE);
        }

        // Check if there's activity on the socket
        if (FD_ISSET(sockfd, &readfds)) {
            socklen_t len = sizeof(cliaddr);
            int num_bytes = recvfrom(sockfd, buffer, BUF_SIZE, 0, (struct sockaddr *)&cliaddr, &len);
            buffer[num_bytes] = '\0';
            printf("Message received from client: %s\n", buffer);

            // Send acknowledgment back to client
            sendto(sockfd, (const char *)buffer, strlen(buffer), 0, (const struct sockaddr *)&cliaddr, len);

            // Add client socket to array if it's not already present
            int found = 0;
            for (int i = 0; i < max_clients; ++i) {
                if (client_fds[i] == cliaddr.sin_port) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                if (max_clients < MAX_CLIENTS) {
                    client_fds[max_clients++] = cliaddr.sin_port;
                    printf("Client connected: %s:%d\n", inet_ntoa(cliaddr.sin_addr), ntohs(cliaddr.sin_port));
                } else {
                    printf("Maximum number of clients reached\n");
                }
            }
        }

        // Check if there's activity on client sockets
        for (int i = 0; i < max_clients; ++i) {
            if (FD_ISSET(client_fds[i], &readfds)) {
                socklen_t len = sizeof(cliaddr);
                int num_bytes = recvfrom(client_fds[i], buffer, BUF_SIZE, 0, (struct sockaddr *)&cliaddr, &len);
                buffer[num_bytes] = '\0';
                printf("Message received from client: %s\n", buffer);

                // Send acknowledgment back to client
                sendto(client_fds[i], (const char *)buffer, strlen(buffer), 0, (const struct sockaddr *)&cliaddr, len);
            }
        }
    }

    close(sockfd);
    return 0;
}

