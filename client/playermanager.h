#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H

#include <vector>
#include <string>

class Player;

class PlayerManager
{
public:
    PlayerManager();

    void addPlayer(std::string& name);

    //static PlayerManager& getInstance();


    std::vector<Player*>* getPlayerList();

private:
    //static PlayerManager* static_player;
    int index;
    std::vector<Player*> mPlayerList;
};

#endif // PLAYERMANAGER_H
