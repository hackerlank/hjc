#include "mainwindow.h"
#include <QApplication>
#include "PlayerManager.h"
#include <string>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    PlayerManager* playerManager = new PlayerManager();
    //PlayerManager::getInstance().addPlayer(std::string("dddd"));

    MainWindow w;
    w.setPlayerManager(playerManager);
    w.show();

    return a.exec();
}
