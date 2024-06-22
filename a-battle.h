// battle.h
#ifndef BATTLE_H
#define BATTLE_H

#include "a-character.h"
#include "a-skill.h"

class Battle
{
public:
    Battle(Characte *player, Characte *enemy);
    void attack();
    void useSkill(Skill *skill);
    bool gameover();

    Characte *player;
    Characte *enemy;
};

#endif // BATTLE_H
