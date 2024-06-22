#ifndef HERO_H
#define HERO_H


#include<QString>
#include<iostream>
class hero
{
public:

    int hp;
    int ap;int mp;
    int exp;int exp_level;
    std::string name;
    int level;
    int money;
    int x,y;

    hero(){};
};
extern hero* main_hero;
extern hero* game_hero;
extern hero* save_hero;

#endif // HERO_H
