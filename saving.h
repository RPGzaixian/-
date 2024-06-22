#ifndef SAVING_H
#define SAVING_H

#include <QWidget>
#include"widget.h"
namespace Ui {
class Saving;
}

class Saving : public QWidget
{
    Q_OBJECT

public:
    Widget *ret;
    bool isread1,isread2,isread3;
    explicit Saving(QWidget *parent = nullptr);
    ~Saving();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Saving *ui;
};

#endif // SAVING_H
