#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "a-character.h"
#include "a-skill.h"
#include "a-battle.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include"game.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class mywidget;
}
QT_END_NAMESPACE

class mywidget : public QWidget
{
    Q_OBJECT

public:
    Game*ret;
    mywidget(QWidget *parent = nullptr);
    ~mywidget();
    Characte *player;
    Characte *enemy;
    Skill *skill1;
    Skill *skill2;
    Battle *battle;
private:
    Ui::mywidget *ui;

// signals:
//     void drug1_number(int value1);
//     void drug2_number(int value2);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void onTriggerButtonClicked();

    void on_pushButton_8_clicked();


public slots:
     void updateValue(int newValue);
     // void updateValue2(int newValue);
     void valueupdate(int newvalue);
     void showdialog();
     void showdia();
};
#endif // MYWIDGET_H
