// character.cpp
#include "a-character.h"

Characte::Characte(QString name, int health, int attack,int MP)
{
    this->name = name;
    this->health = health;
    this->att = attack;
    this->MP = MP;
    this->initial_health = health;
    this->initial_MP = MP;

    drug1_num = 5;
    drug2_num = 5;
}

void Characte::takeDamage(int damage)
{
    if(health>=damage)
    {
       health -= damage;
    }

    else {
        health = 0;
    }
}

void Characte::attack(Characte *target)
{
    target->takeDamage(att);
}

void Characte::takeMP(int MP_needed)
{
    if(MP>=MP_needed)
    {
        MP -= MP_needed;
    }

    else MP = 0;
}

float Characte::HP_percent()
{
    float ans;
    ans = (float)health/initial_health;
    return ans;
}

float Characte::MP_percent()
{
    float ans;
    ans = (float)MP/initial_MP;
    return ans;
}

void Characte::MP_recovery()
{
    if(MP<initial_MP)
    {
        if(MP+20>=initial_MP)
        {
            MP = initial_MP;
        }

        else {
            MP += 20;
        }
    }
}

void Characte::HP_drugrecovery1()
{
    health += 30;
}

void Characte::HP_drugrecovery2()
{
    health += 50;
}
