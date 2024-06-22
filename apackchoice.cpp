#include "apackchoice.h"
#include "ui_apackchoice.h"
#include "amywidget.h"

int tot1 = 0;
int tot2 = 0;
packchoice::packchoice(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::packchoice)
{
    ui->setupUi(this);
    drug1num = 5-tot1;
    drug2num = 5-tot2;
    this->ui->label->setText(QString::fromStdString("还剩下")+QString::number(this->drug1num));
    this->ui->label_2->setText(QString::fromStdString("还剩下")+QString::number(this->drug2num));

}

packchoice::~packchoice()
{
    delete ui;
}

void packchoice::on_pushButton_clicked()
{
    accept();
}


void packchoice::on_pushButton_2_clicked()
{
    int newValue = 30;
    tot1++;

    if(this->drug1num > 0)
    {
        this->drug1num--;
        emit valuechanged(newValue);
    }
    else{
        tot1 = 5;
    }
    this->ui->label->setText(QString::fromStdString("还剩下")+QString::number(this->drug1num));
    close();
}


void packchoice::on_pushButton_3_clicked()
{
    int newvalue = 10;
    tot2++;
    if(this->drug2num > 0)
    {
        this->drug2num--;
        emit changevalue(newvalue);

    }

    else{
        tot2 = 5;
    }
    this->ui->label->setText(QString::fromStdString("还剩下")+QString::number(this->drug2num));

    close();
}


void packchoice::on_label_linkActivated(const QString &link)
{

}

// int packchoice::get_drug1_num(int value1)
// {
//     return value1;
// }


// void packchoice::get_drug2_num(int value2)
// {
//     this->drug2num = value2;
// }
