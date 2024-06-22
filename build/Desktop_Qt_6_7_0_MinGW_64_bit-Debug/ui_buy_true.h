/********************************************************************************
** Form generated from reading UI file 'buy_true.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_TRUE_H
#define UI_BUY_TRUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_buy_true
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *buy_true)
    {
        if (buy_true->objectName().isEmpty())
            buy_true->setObjectName("buy_true");
        buy_true->resize(400, 300);
        label = new QLabel(buy_true);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 80, 151, 51));
        pushButton = new QPushButton(buy_true);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 210, 80, 24));

        retranslateUi(buy_true);

        QMetaObject::connectSlotsByName(buy_true);
    } // setupUi

    void retranslateUi(QDialog *buy_true)
    {
        buy_true->setWindowTitle(QCoreApplication::translate("buy_true", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("buy_true", "<html><head/><body><p><span style=\" font-size:24pt;\">\350\264\255\344\271\260\346\210\220\345\212\237\357\274\201</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("buy_true", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buy_true: public Ui_buy_true {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_TRUE_H
