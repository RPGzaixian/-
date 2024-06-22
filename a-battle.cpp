// battle.cpp
#include "a-battle.h"

Battle::Battle(Characte *player, Characte *enemy)
{
    this->player = player;
    this->enemy = enemy;
}

void Battle::attack()
{
    player->attack(enemy);
    enemy->attack(player);
}

void Battle::useSkill(Skill *skill)
{
    if(player->MP >= skill->MP_needed)
    {
        enemy->takeDamage(skill->damage);
        player->takeMP(skill->MP_needed);
    }

    else return;

}

bool Battle::gameover()
{
    if(player->health == 0 || enemy->health == 0 )
    {
        return true;
    }

    else return false;
}
