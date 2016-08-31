#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class create_player;

class PlayerManager;

class PlayerInfo
{
public:
    PlayerInfo(int id, std::string name);

public:
    int m_id;
    std::string m_name;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void loadPlayer();

    void setPlayerManager(PlayerManager* mgr);

private slots:
    void on_pushButton_pressed();

    void on_columnView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    create_player* m_create_dialog;

    std::vector<PlayerInfo*> m_player_list;
    PlayerManager* m_player_manager;
};

#endif // MAINWINDOW_H
