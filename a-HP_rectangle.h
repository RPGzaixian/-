#ifndef HP_RECTANGLE_H
#define HP_RECTANGLE_H

#include <QWidget>
#include "a-character.h"
#include "a-skill.h"
#include "a-battle.h"



class RectWidget : public QWidget
{
private:
    Characte *player;
    int value;
public:
    RectWidget(QWidget *parent = nullptr) : QWidget(parent);
    void setValue();

protected:
    void paintEvent(QPaintEvent *event) override;



};






#endif // HP_RECTANGLE_H
