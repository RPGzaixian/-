#include "atrue_false.h"
#include "ui_atrue_false.h"

true_false::true_false(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::true_false)
{
    ui->setupUi(this);
}

true_false::~true_false()
{
    delete ui;
}

void true_false::on_pushButton_clicked()
{
    this->ret->ret->show();
    this->close();
}


void true_false::on_label_linkActivated(const QString &link)
{

}

