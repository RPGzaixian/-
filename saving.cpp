#include "saving.h"
#include "ui_saving.h"
#include"widget.h"
#include"w.h"
#include"the_init_for_save.h"
#include<fstream>
#include<QFile>
#include<QTextStream>
#include"game.h"
Saving::Saving(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Saving)
{
    ui->setupUi(this);
    isread1=isread2=isread3=false;
}

Saving::~Saving()
{
    delete ui;
}

void Saving::on_pushButton_clicked()
{
    this->ret->show();
    this->close();
}


void Saving::on_pushButton_2_clicked()
{
    QFile file(":/cundang/1.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        QString name;
        in>>name;
        save_hero->name=name.toStdString();
        in>>save_hero->hp>>save_hero->ap>>save_hero->mp;
        in>>save_hero->exp_level>>save_hero->exp;
        in>>save_hero->money>>save_hero->level;in>>save_hero->x>>save_hero->y;
        int a,b,c;
        in>>a>>b>>c;
        items_backage.clear();
        items_backage.push_back(std::make_pair(goods_hp(),a));
        items_backage.push_back(std::make_pair(goods_ap(),b));
        items_backage.push_back(std::make_pair(goods_ex(),c));
        file.close();
    }
    Game *game=new Game;
    game->ret=this;
    game->where=1;
    game->show();
    this->close();


}


void Saving::on_pushButton_3_clicked()
{
    QFile file(":/cundang/2.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        QString name;
        in>>name;
        save_hero->name=name.toStdString();
        in>>save_hero->hp>>save_hero->ap>>save_hero->mp;
        in>>save_hero->exp_level>>save_hero->exp;
        in>>save_hero->money>>save_hero->level;in>>save_hero->x>>save_hero->y;
        int a,b,c;
        in>>a>>b>>c;
        items_backage.clear();
        items_backage.push_back(std::make_pair(goods_hp(),a));
        items_backage.push_back(std::make_pair(goods_ap(),b));
        items_backage.push_back(std::make_pair(goods_ex(),c));
        file.close();
    }
    Game *game=new Game;
    game->ret=this;
    game->where=2;
    game->show();

    this->close();
}


void Saving::on_pushButton_4_clicked()
{
    QFile file(":/cundang/3.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        QString name;
        in>>name;
        save_hero->name=name.toStdString();
        in>>save_hero->hp>>save_hero->ap>>save_hero->mp;
        in>>save_hero->exp_level>>save_hero->exp;
        in>>save_hero->money>>save_hero->level;in>>save_hero->x>>save_hero->y;
        int a,b,c;
        in>>a>>b>>c;
        items_backage.clear();
        items_backage.push_back(std::make_pair(goods_hp(),a));
        items_backage.push_back(std::make_pair(goods_ap(),b));
        items_backage.push_back(std::make_pair(goods_ex(),c));
        file.close();
    }
    Game *game=new Game;
    game->ret=this;
    game->where=3;
    game->show();
    this->close();
}

