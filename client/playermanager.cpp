#include "playermanager.h"
#include "player.h"

//PlayerManager::static_player = NULL;

PlayerManager::PlayerManager()
{
    index = 0;
}

void PlayerManager::addPlayer(std::string& name)
{
    index++;

    Player* newPlayer = new Player();
    newPlayer->id = index;
    newPlayer->name = name;

    mPlayerList.push_back(newPlayer);
}


std::vector<Player*>* PlayerManager::getPlayerList()
{
    return &mPlayerList;
}

/*
PlayerManager& getInstance()
{
    if(NULL == static_player)
    {
        static_player = new PlayerManager();
    }

    return static_player;
}
*/
