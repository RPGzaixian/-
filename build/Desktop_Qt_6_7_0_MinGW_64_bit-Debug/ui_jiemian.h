/********************************************************************************
** Form generated from reading UI file 'jiemian.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JIEMIAN_H
#define UI_JIEMIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jiemian
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *jiemian)
    {
        if (jiemian->objectName().isEmpty())
            jiemian->setObjectName("jiemian");
        jiemian->resize(400, 300);
        pushButton = new QPushButton(jiemian);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 150, 80, 24));
        label = new QLabel(jiemian);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 80, 54, 16));

        retranslateUi(jiemian);

        QMetaObject::connectSlotsByName(jiemian);
    } // setupUi

    void retranslateUi(QWidget *jiemian)
    {
        jiemian->setWindowTitle(QCoreApplication::translate("jiemian", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("jiemian", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("jiemian", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jiemian: public Ui_jiemian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JIEMIAN_H
