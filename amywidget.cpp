#include "amywidget.h"
#include "ui_amywidget.h"
#include <QPushButton>
#include "a-HP_rectangle.cpp"
#include "atrue_false.h"
#include "at_f.h"
#include <thread>
#include "apackchoice.h"
#include"game.h"
mywidget::mywidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mywidget)
{
    player = new Characte("Player", 100, 40,200);
    enemy = new Characte("Enemy", 80, 32,200);
    skill1 = new Skill("Skill1", 20,50);
    skill2 = new Skill("Skill2", 20,60);

    battle = new Battle(player, enemy);

    // playerHP = new RectWidget(parent);

    ui->setupUi(this);
    this->ui->pushButton_4->setStyleSheet("background-color: red; color: white;");
    this->ui->pushButton_4->setFixedSize(270*player->HP_percent(),20);

    this->ui->pushButton_5->setStyleSheet("background-color: red; color: white;");
    this->ui->pushButton_5->setFixedSize(270*enemy->HP_percent(),20);

    this->ui->pushButton_6->setStyleSheet("background-color: blue; color: white;");
    this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);

    this->ui->pushButton_7->setStyleSheet("background-color: blue; color: white;");
    this->ui->pushButton_7->setFixedSize(270*enemy->MP_percent(),20);

    this->ui->label_5->setText(QString::number(this->battle->player->health)+QString::fromStdString("/")+QString::number(this->battle->player->initial_health));
    this->ui->label_6->setText(QString::number(this->battle->enemy->health)+QString::fromStdString("/")+QString::number(this->battle->enemy->initial_health));

    this->ui->label_7->setText(QString::number(this->battle->player->MP)+QString::fromStdString("/")+QString::number(this->battle->player->initial_MP));
    this->ui->label_8->setText(QString::number(this->battle->enemy->MP)+QString::fromStdString("/")+QString::number(this->battle->enemy->initial_MP));



}

mywidget::~mywidget()
{
    delete ui;
}

void mywidget::on_pushButton_clicked()
{
    battle->useSkill(skill1);
    this->ui->pushButton_5->setFixedSize(270*enemy->HP_percent(),20);
    this->ui->label_6->setText(QString::number(this->battle->enemy->health)+QString::fromStdString("/")+QString::number(this->battle->enemy->initial_health));
    // battle->player->MP_recovery();
    this->ui->label_7->setText(QString::number(this->battle->player->MP)+QString::fromStdString("/")+QString::number(this->battle->player->initial_MP));
    this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);

    if(this->battle->gameover())
    {
        if(this->battle->enemy->health == 0)
        {
            // true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
            QTimer *timer1 = new QTimer(this);
            connect(timer1, &QTimer::timeout, this, &mywidget::showdia);
            timer1->setSingleShot(true); // 设置定时器为单次触发
            timer1->start(1000); // 启动定时器，3000毫秒后触发timeout信号
            return;
            // this->close();
            // dialog->show(); // 显示弹出窗口
            // return;
        }

        else if(this->battle->player->health == 0)
        {
            T_F *dia = new T_F(this);
            this->close();
            dia->ret=this;
            dia->show();
            return;
        }
    }
    battle->enemy->attack(player);
    if(this->battle->player->health > 0)
    {
       this->onTriggerButtonClicked();
    }
    else{

    // ui->pushButton->setEnabled(false);
    // ui->pushButton_2->setEnabled(false);
    // ui->pushButton_3->setEnabled(false);
    // ui->pushButton_8->setEnabled(false);
    // ui->pushButton_4->setFixedSize(270*player->HP_percent(),20);
    // this->ui->label_5->setText(QString::number(this->battle->player->health)+QString::fromStdString("/")+QString::number(this->battle->player->initial_health));
    // battle->player->MP_recovery();
    // this->ui->label_7->setText(QString::number(this->battle->player->MP)+QString::fromStdString("/")+QString::number(this->battle->player->initial_MP));
    // this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);

    this->onTriggerButtonClicked();
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &mywidget::showdialog);
    timer->setSingleShot(true); // 设置定时器为单次触发
    timer->start(4000); // 启动定时器，3000毫秒后触发timeout信号

    // if(this->battle->player->health == 0)
    // {
    //     std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    // }

    // if(this->battle->gameover())
    // {
    //     if(this->battle->enemy->health == 0)
    //     {
    //         true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
    //         this->close();
    //         dialog->show(); // 显示弹出窗口

    //     }

    //     else if(this->battle->player->health == 0)
    //     {
    //         this->onTriggerButtonClicked();
    //         T_F *dia = new T_F(this);
    //         this->close();
    //         dia->show();

    //     }
    // }


    }
}


void mywidget::on_pushButton_2_clicked()
{
    battle->useSkill(skill2);
    this->ui->pushButton_5->setFixedSize(270*enemy->HP_percent(),20);
    this->ui->label_6->setText(QString::number(this->battle->enemy->health)+QString::fromStdString("/")+QString::number(this->battle->enemy->initial_health));
    // battle->player->MP_recovery();
    this->ui->label_7->setText(QString::number(this->battle->player->MP)+QString::fromStdString("/")+QString::number(this->battle->player->initial_MP));
    this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);

    if(this->battle->gameover())
    {
        if(this->battle->enemy->health == 0)
        {
            // true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
            // this->close();

            // dialog->show(); // 显示弹出窗口
            QTimer *timer1 = new QTimer(this);
            connect(timer1, &QTimer::timeout, this, &mywidget::showdia);
            timer1->setSingleShot(true); // 设置定时器为单次触发
            timer1->start(1000); // 启动定时器，3000毫秒后触发timeout信号
            return;
        }

        else if(this->battle->player->health == 0)
        {
            T_F *dia = new T_F(this);
            this->close();
            dia->ret=this;
            dia->show();
            return;
        }
    }
     battle->enemy->attack(player);
    if(this->battle->player->health > 0)
     {
         this->onTriggerButtonClicked();
     }

     // if(this->battle->player->health == 0)
     // {
     //     std::this_thread::sleep_for(std::chrono::milliseconds(3000));
     // }
    else{
         this->onTriggerButtonClicked();
         QTimer *timer = new QTimer(this);
         connect(timer, &QTimer::timeout, this, &mywidget::showdialog);
         timer->setSingleShot(true); // 设置定时器为单次触发
         timer->start(4000); // 启动定时器，3000毫秒后触发timeout信号



     }
     // if(this->battle->gameover())
     // {
     //     if(this->battle->enemy->health == 0)
     //     {
     //         true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
     //         this->close();
     //         dialog->show(); // 显示弹出窗口
     //     }

     //     else if(this->battle->player->health == 0)
     //     {
     //         T_F *dia = new T_F(this);
     //         this->close();
     //         dia->show();
     //     }
     // }
}


void mywidget::on_pushButton_3_clicked()
{
    battle->player->attack(enemy);
    this->ui->pushButton_5->setFixedSize(270*enemy->HP_percent(),20);
    this->ui->label_6->setText(QString::number(this->battle->enemy->health)+QString::fromStdString("/")+QString::number(this->battle->enemy->initial_health));
    // battle->player->MP_recovery();
    this->ui->label_7->setText(QString::number(this->battle->player->MP)+QString::fromStdString("/")+QString::number(this->battle->player->initial_MP));
    this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);

    if(this->battle->gameover())
    {
        if(this->battle->enemy->health == 0)
        {
            // true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
            // this->close();
            // dialog->show(); // 显示弹出窗口
            // return;
            QTimer *timer1 = new QTimer(this);
            connect(timer1, &QTimer::timeout, this, &mywidget::showdia);
            timer1->setSingleShot(true); // 设置定时器为单次触发
            timer1->start(1000); // 启动定时器，3000毫秒后触发timeout信号
            return;
        }

        else if(this->battle->player->health == 0)
        {
            T_F *dia = new T_F(this);
            this->close();
            dia->ret=this;
            dia->show();
            return;
        }
    }
    battle->enemy->attack(player);

    // this->onTriggerButtonClicked();
    // if(this->battle->player->health == 0)
    // {
    //     std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    // }
    // if(this->battle->gameover())
    // {
    //     if(this->battle->enemy->health == 0)
    //     {
    //         true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
    //         this->close();
    //         dialog->show(); // 显示弹出窗口
    //     }

    //     else if(this->battle->player->health == 0)
    //     {
    //         T_F *dia = new T_F(this);
    //         this->close();
    //         dia->show();
    //     }
    // }

    if(this->battle->player->health > 0)
    {
       this->onTriggerButtonClicked();
    }

    else{
        this->onTriggerButtonClicked();
        QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &mywidget::showdialog);
        timer->setSingleShot(true); // 设置定时器为单次触发
        timer->start(4000); // 启动定时器，3000毫秒后触发timeout信号

    }
}


void mywidget::on_pushButton_4_clicked()
{

}


void mywidget::on_pushButton_5_clicked()
{

}


void mywidget::on_pushButton_7_clicked()
{

}


void mywidget::on_pushButton_6_clicked()
{

}

void mywidget::onTriggerButtonClicked()
{
    // 禁用所有按钮，防止在三秒内按任何键
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_8->setEnabled(false);

    // 设置定时器，三秒后执行缩短蓝色按钮的操作
    QTimer::singleShot(3000, this, [this]() {

        ui->pushButton_4->setFixedSize(270*player->HP_percent(),20);
        this->ui->label_5->setText(QString::number(this->battle->player->health)+QString::fromStdString("/")+QString::number(this->battle->player->initial_health));
        battle->player->MP_recovery();
        this->ui->label_7->setText(QString::number(this->battle->player->MP)+QString::fromStdString("/")+QString::number(this->battle->player->initial_MP));
        this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
        ui->pushButton_8->setEnabled(true);
    });
}

void mywidget::on_pushButton_8_clicked()
{
    packchoice *pc1 = new packchoice(this);
    connect(pc1,&packchoice::valuechanged,this,&mywidget::updateValue);
    connect(pc1,&packchoice::changevalue,this,&mywidget::valueupdate);

    pc1->setModal(true);
    pc1->show();

    // int value1 = this->player->drug1_num;
    // emit drug1_number(value1);

    // int value2 = this->player->drug2_num;
    // emit drug2_number(value2);
    // connect(this,&mywidget::drug1_number,pc1,&packchoice::get_drug1_num);
    // connect(this,&mywidget::drug2_number,pc1,&packchoice::get_drug2_num);

}

void mywidget::updateValue(int newValue)
{
    if(this->battle->player->health + newValue <= this->battle->player->initial_health)
    {
        this->battle->player->health  += newValue;
    }

    else{
        this->battle->player->health = this->battle->player->initial_health;
    }

    ui->pushButton_4->setFixedSize(270*player->HP_percent(),20);
    this->ui->label_5->setText(QString::number(this->battle->player->health)+QString::fromStdString("/")+QString::number(this->battle->player->initial_health));
    this->battle->enemy->attack(player);

    // this->onTriggerButtonClicked();

    if(this->battle->player->health > 0)
    {
        this->onTriggerButtonClicked();
    }

    else{
        this->onTriggerButtonClicked();
        QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &mywidget::showdialog);
        timer->setSingleShot(true); // 设置定时器为单次触发
        timer->start(4000); // 启动定时器，3000毫秒后触发timeout信号

    }
}

void mywidget::valueupdate(int newvalue)
{
    this->battle->player->att += newvalue;
    this->skill1->damage += newvalue;
    this->skill2->damage += newvalue;
    this->battle->enemy->attack(player);

    // this->onTriggerButtonClicked();

    if(this->battle->player->health > 0)
    {
        this->onTriggerButtonClicked();
    }

    else{
        this->onTriggerButtonClicked();
        QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &mywidget::showdialog);
        timer->setSingleShot(true); // 设置定时器为单次触发
        timer->start(4000); // 启动定时器，3000毫秒后触发timeout信号

    }


}

void mywidget::showdialog()
{
    T_F *dia = new T_F(this);
    this->close();
    dia->ret=this;
    dia->show();
}

void mywidget::showdia()
{
    true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
    this->close();
    dialog->ret=this;
    dialog->show();

}
