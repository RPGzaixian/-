#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "character.h"
#include "npc.h"
#include"saving.h"
#include"QPushButton"
#include"QLabel"
class Game : public QGraphicsView
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    Saving *ret;
    // mywidget *ret_play;
    int where;
    QPushButton *ret_button;
    QPushButton *sav_button;
    QPushButton *bag_button;
    QPushButton *store_button;
    QPushButton *play_button;
    QLabel *money_label;
    QLabel *exp_label;
public slots:
    void button_return();
    void button_save();
    void button_bag();
    void button_store();
    void button_play();

private:
    QGraphicsScene *scene;
    Character *character;
    NPC *npc;

    // QLabel *money_label;
    // QLabel *money_label;
    // QPushButton *ret_button;
};


#endif // GAME_H
