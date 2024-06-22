#ifndef SKILL_H
#define SKILL_H
#include <QString>

class Skill
{
public:
    Skill(QString name, int damage,int MP_needed);

    QString name;
    int damage;
    int MP_needed;
};
#endif // SKILL_H
