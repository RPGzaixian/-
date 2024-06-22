/********************************************************************************
** Form generated from reading UI file 'keyswitch.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYSWITCH_H
#define UI_KEYSWITCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Keyswitch
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Keyswitch)
    {
        if (Keyswitch->objectName().isEmpty())
            Keyswitch->setObjectName("Keyswitch");
        Keyswitch->resize(374, 277);
        pushButton = new QPushButton(Keyswitch);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 190, 80, 24));

        retranslateUi(Keyswitch);

        QMetaObject::connectSlotsByName(Keyswitch);
    } // setupUi

    void retranslateUi(QDialog *Keyswitch)
    {
        Keyswitch->setWindowTitle(QCoreApplication::translate("Keyswitch", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Keyswitch", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Keyswitch: public Ui_Keyswitch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYSWITCH_H
