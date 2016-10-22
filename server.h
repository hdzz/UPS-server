//
// Created by Seda on 20. 10. 2016.
//

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <iostream>
#include <string.h>

#ifndef UPS_SERVER_SERVER_H
#define UPS_SERVER_SERVER_H

#define MAX_CONNECTED 4

class server {
    int serverPort;
    int sockfd;
    int connectedUsers;
    bool serverFull;

    struct sockaddr_in sockAddr;

    struct User{
        int uId;
        std::string name;
    }users[MAX_CONNECTED];
public:
    server(int port);
    void start();
    void sendMsg(int socket, std::string msg);
    std::string receiveMsg(int socket);
    void loginUsr(int socket, std::string name);
    bool nameAvailable(std::string name);
};

#endif //UPS_SERVER_SERVER_H
