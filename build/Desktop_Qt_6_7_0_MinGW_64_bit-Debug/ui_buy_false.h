/********************************************************************************
** Form generated from reading UI file 'buy_false.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_FALSE_H
#define UI_BUY_FALSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_buy_false
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *buy_false)
    {
        if (buy_false->objectName().isEmpty())
            buy_false->setObjectName("buy_false");
        buy_false->resize(400, 300);
        pushButton = new QPushButton(buy_false);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 210, 80, 24));
        label = new QLabel(buy_false);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 90, 271, 51));

        retranslateUi(buy_false);

        QMetaObject::connectSlotsByName(buy_false);
    } // setupUi

    void retranslateUi(QDialog *buy_false)
    {
        buy_false->setWindowTitle(QCoreApplication::translate("buy_false", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("buy_false", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("buy_false", "<html><head/><body><p><span style=\" font-size:24pt;\">\351\222\261\344\270\215\345\244\237\357\274\214\350\264\255\344\271\260\345\244\261\350\264\245</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buy_false: public Ui_buy_false {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_FALSE_H
