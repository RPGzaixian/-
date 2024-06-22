#include "at_f.h"
#include "ui_at_f.h"

T_F::T_F(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::T_F)
{
    ui->setupUi(this);
}

T_F::~T_F()
{
    delete ui;
}

void T_F::on_pushButton_clicked()
{
    this->ret->ret->show();
    this->close();
}

