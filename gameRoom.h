//
// Created by seda on 27/10/16.
//

#ifndef UPS_SERVER_GAMEROOM_H
#define UPS_SERVER_GAMEROOM_H

#include <vector>
#include "players.h"

class server;

class gameRoom {
public:
    gameRoom();
    struct rooms {
        int roomId;
        std::string roomName;
        std::vector<players::User> player;
        int numPlaying;
        int maxPlaying;
        bool isFull;
    } room;

    enum RoomStatus{
        ROOM_WAIT,
        ROOM_READY,
        ROOM_PLAYING
    }roomStatus;

    void addPlayer(players::User player);
    bool isFull();
};

#endif //UPS_SERVER_GAMEROOM_H
