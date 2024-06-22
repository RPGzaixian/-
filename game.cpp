#include "game.h"
#include "npc.h"
#include <QTimer>
// #include"the_init_for_expresion.h"
#include<QDebug>
#include"store.h"
#include"package.h"
#include"the_init_for_game.h"
#include<fstream>
#include<iostream>
#include<QFile>
#include<QByteArray>
#include"amywidget.h"
extern hero*game_hero;
Game::Game(QWidget *parent)
    : QGraphicsView(parent), scene(new QGraphicsScene(this))
{

    // 设置场景大小
    scene->setSceneRect(0, 0, 1280, 960);
    setScene(scene);
    setFixedSize(1080, 760);

    // 添加背景
    QGraphicsPixmapItem *background = new QGraphicsPixmapItem(QPixmap(":/images/background1.jpg"));
    scene->addItem(background);
    background->setPos(0, 0);

    // 添加角色
    character = new Character(":/images/character.png");
    character->setPos(game_hero->x, game_hero->y);
    scene->addItem(character);
    character->setFlag(QGraphicsItem::ItemIsFocusable);
    character->setFocus();

    // 添加NPC
    npc = new NPC(":/images/npc_nvwu.png");
    npc->setPos(830, 275);
    scene->addItem(npc);

    //添加
    ret_button=new QPushButton("返回",this);
    ret_button->setGeometry(QRect(10,10,50,50));
    connect(ret_button,&QPushButton::clicked, this, &Game::button_return);

    sav_button=new QPushButton("保存",this);
    sav_button->setGeometry(QRect(10,70,50,50));
    connect(sav_button,&QPushButton::clicked, this, &Game::button_save);


    bag_button=new QPushButton("背包",this);
    bag_button->setGeometry(QRect(10,130,50,50));
    connect(bag_button,&QPushButton::clicked, this, &Game::button_bag);

    store_button=new QPushButton("商店",this);
    store_button->setGeometry(QRect(10,200,50,50));
    connect(store_button,&QPushButton::clicked, this, &Game::button_store);

    play_button=new QPushButton("对战",this);
    play_button->setGeometry(QRect(920,600,130,130));
    connect(play_button,&QPushButton::clicked, this, &Game::button_play);

    std::string op="金钱"+std::to_string(game_hero->money);
    // std::string op="金钱"+std::to_string(2345);
    money_label=new QLabel(QString::fromStdString(op),this);
    money_label->setGeometry(QRect(200,10,200,30));


    connect(character, &Character::collideWithNPC, npc, &NPC::interact);
}

void Game::button_return(){
    this->close();
    this->ret->show();
}

void Game::button_bag(){
    package* bag=new package;
    bag->show();
}

// void Game::button_save(){
//     if(this->where==1){
//         QFile file1(":/cundang/1.txt");
//         if(file1.open(QIODevice::WriteOnly | QIODevice::Text)){
//             QTextStream out(&file1);
//             out<<game_hero->name<<'\n'<<game_hero->hp<<'\n'<<game_hero->ap;
//             out<<'\n'<<game_hero->mp<<'\n'<<game_hero->exp<<'\n'<<game_hero->exp_level;
//             out<<'\n'<<game_hero->money<<'\n'<<game_hero->level;
//         }
//         file1.close();
//     }
//     if(this->where==2){
//         QFile file2(":/cundang/2.txt");
//         if(file2.open(QIODevice::WriteOnly | QIODevice::Text)){
//             QTextStream out(&file2);
//             out<<game_hero->name<<'\n'<<game_hero->hp<<'\n'<<game_hero->ap;
//             out<<'\n'<<game_hero->mp<<'\n'<<game_hero->exp<<'\n'<<game_hero->exp_level;
//             out<<'\n'<<game_hero->money<<'\n'<<game_hero->level;
//         }
//         file2.close();
//     }
//     if(this->where==3){
//         QFile file3(":/cundang/3.txt");
//         if(file3.open(QIODevice::WriteOnly | QIODevice::Text)){
//             QTextStream out(&file3);
//             out<<game_hero->name<<'\n'<<game_hero->hp<<'\n'<<game_hero->ap;
//             out<<'\n'<<game_hero->mp<<'\n'<<game_hero->exp<<'\n'<<game_hero->exp_level;
//             out<<'\n'<<game_hero->money<<'\n'<<game_hero->level;
//         }
//         file3.close();
//     }
// }
void Game::button_save(){
    std::string filePath;
    switch (this->where) {
    case 1:
        filePath = "C:\\Users\\29618\\Desktop\\5\\1.txt";
        break;
    case 2:
        filePath = "C:\\Users\\29618\\Desktop\\5\\2.txt";
        break;
    case 3:
        filePath = "C:\\Users\\29618\\Desktop\\5\\3.txt";
        break;
    default:
        // 处理无效的where值
        qDebug() << "Invalid save location:" << this->where;
        return;
    }
    std::ofstream out(filePath);
    if(!out.is_open())qDebug()<<23<<'\n';
    out<<save_hero->name<<'\n'<<save_hero->hp<<'\n'<<save_hero->ap<<'\n'<<save_hero->mp;
    out<<'\n'<<save_hero->exp_level<<'\n'<<save_hero->exp;
    out<<'\n'<<save_hero->money<<'\n'<<save_hero->level<<'\n'<<character->pos().x()<<'\n'<<character->pos().y();
    int a,b,c;
    auto lanel=items_backage.begin();
    a=lanel->second;lanel++;
    b=lanel->second;lanel++;
    c=lanel->second;lanel++;
    out<<'\n'<<a<<'\n'<<b<<'\n'<<c;
    out.close();
    // QFile ou(QString::fromStdString(filePath));
    // ou.flush();
    // ou.close();

    this->close();
}
// void Game::button_save() {
//     QString filePath;
//     switch (this->where) {
//     case 1:
//         filePath = ":/cundang/1.txt";
//         break;
//     case 2:
//         filePath = ":/cundang/2.txt";
//         break;
//     case 3:
//         filePath = ":/cundang/3.txt";
//         break;
//     default:
//         // 处理无效的where值
//         qDebug() << "Invalid save location:" << this->where;
//         return;
//     }

//     QFile saveFile(filePath);
//     if (!saveFile.open(QIODevice::WriteOnly)) {
//         // 处理文件打开失败的情况
//         qDebug() << "Failed to open file for saving:" << filePath;
//         return;
//     }
//     QByteArray data=QByteArray::fromStdString(game_hero->name+'\n'
//             +std::to_string(game_hero->hp)+'\n'+std::to_string(game_hero->ap)+
//             '\n'+std::to_string(game_hero->mp)+'\n'+std::to_string(game_hero->exp)+
//             '\n'+std::to_string(game_hero->exp_level)+'\n'+std::to_string(game_hero->money)+'\n'+std::to_string(game_hero->level));
//     saveFile.write(data);
//     // QTextStream out(&saveFile);
//     // out << game_hero->name << '\n'
//     //     << game_hero->hp << '\n'
//     //     << game_hero->ap << '\n'
//     //     << game_hero->mp << '\n'
//     //     << game_hero->exp << '\n'
//     //     << game_hero->exp_level << '\n'
//     //     << game_hero->money << '\n'
//     //     << game_hero->level;

//     saveFile.close(); // 虽然close()在这里是可选的，因为QFile的析构函数会调用它，但显式调用可以提高代码的可读性
// }

/*
        in>>save_hero->name>>save_hero->hp>>save_hero->ap>>save_hero->mp;
        in>>save_hero->exp_level>>save_hero->exp;
        in>>save_hero->money>>save_hero->level;
*/
void Game::button_store(){
    store *sto=new store;
    sto->ret=this;
    sto->show();

}
void Game::button_play(){
    mywidget *pla=new mywidget;
    this->close();
    pla->show();
    pla->ret=this;
}
