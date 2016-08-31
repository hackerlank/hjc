#include "create_player.h"
#include "ui_create_player.h"
#include "playerManager.h"

create_player::create_player(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_player)
{
    ui->setupUi(this);
}

create_player::~create_player()
{
    delete ui;
}

void create_player::setPlayerManager(PlayerManager* mgr)
{
    m_player_manager = mgr;
}

void create_player::on_btn_create_player_clicked()
{
    QString name = ui->edit_name->text();
    int kk = 0;
    m_player_manager->addPlayer(name.toStdString());
    //PlayerManager::getInstance().addPlayer(name.toStdString());
}
