#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>
int main() {
    // create socket using socket()
    int udpSocket, nBytes;
    udpSocket = socket(AF_INET, SOCK_DGRAM, 0);

    // set socket address
    struct sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(3000);
    serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

    // bind a empty socket width address
    bind(udpSocket, (struct sockaddr *) &serverAddr, sizeof serverAddr);

    // server storage to save data from remote client
    struct sockaddr_storage serverStorage;
    socklen_t addr_size = sizeof serverStorage;
    addr_size = sizeof serverStorage;

    // receive data and put it into buffer
    char buffer[1024];
    while (1) {
        nBytes = recvfrom(udpSocket, buffer, 1024, 0, (struct sockaddr *)&serverStorage, &addr_size);
        printf("received msg: %s\n", buffer);
    }
}
