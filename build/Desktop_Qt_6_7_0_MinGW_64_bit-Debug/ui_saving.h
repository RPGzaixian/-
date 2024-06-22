/********************************************************************************
** Form generated from reading UI file 'saving.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVING_H
#define UI_SAVING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Saving
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Saving)
    {
        if (Saving->objectName().isEmpty())
            Saving->setObjectName("Saving");
        Saving->resize(904, 550);
        pushButton = new QPushButton(Saving);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 30, 101, 41));
        pushButton_2 = new QPushButton(Saving);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 100, 181, 281));
        pushButton_3 = new QPushButton(Saving);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(370, 100, 171, 281));
        pushButton_4 = new QPushButton(Saving);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(620, 100, 161, 281));

        retranslateUi(Saving);

        QMetaObject::connectSlotsByName(Saving);
    } // setupUi

    void retranslateUi(QWidget *Saving)
    {
        Saving->setWindowTitle(QCoreApplication::translate("Saving", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Saving", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Saving", "\345\255\230\346\241\2431", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Saving", "\345\255\230\346\241\2432", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Saving", "\345\255\230\346\241\2433", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Saving: public Ui_Saving {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVING_H
