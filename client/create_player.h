#ifndef CREATE_PLAYER_H
#define CREATE_PLAYER_H

#include <QDialog>

namespace Ui {
class create_player;
}

class PlayerManager;

class create_player : public QDialog
{
    Q_OBJECT

public:
    explicit create_player(QWidget *parent = 0);
    ~create_player();

    void setPlayerManager(PlayerManager* mgr);

private slots:
    void on_btn_create_player_clicked();

private:
    Ui::create_player *ui;

    PlayerManager* m_player_manager;

};

#endif // CREATE_PLAYER_H
