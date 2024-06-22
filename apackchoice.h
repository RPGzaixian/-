#ifndef PACKCHOICE_H
#define PACKCHOICE_H

#include "amywidget.h"
#include <QDialog>

namespace Ui {
class packchoice;
}

class packchoice : public QDialog
{
    Q_OBJECT

signals:
    void valuechanged(int newValue);
    void changevalue(int newvalue);

public:
    explicit packchoice(QWidget *parent = nullptr);
    ~packchoice();
    int drug1num;
    int drug2num;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_label_linkActivated(const QString &link);

private:
    Ui::packchoice *ui;

// public slots:
//     void get_drug1_num(int value1);
//     void get_drug2_num(int value2);
};


#endif // PACKCHOICE_H
