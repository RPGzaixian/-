/********************************************************************************
** Form generated from reading UI file 'reallyquit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALLYQUIT_H
#define UI_REALLYQUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReallyQuit
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *ReallyQuit)
    {
        if (ReallyQuit->objectName().isEmpty())
            ReallyQuit->setObjectName("ReallyQuit");
        ReallyQuit->resize(244, 135);
        pushButton = new QPushButton(ReallyQuit);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 80, 80, 24));
        pushButton_2 = new QPushButton(ReallyQuit);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 80, 80, 24));
        label = new QLabel(ReallyQuit);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 141, 51));

        retranslateUi(ReallyQuit);

        QMetaObject::connectSlotsByName(ReallyQuit);
    } // setupUi

    void retranslateUi(QDialog *ReallyQuit)
    {
        ReallyQuit->setWindowTitle(QCoreApplication::translate("ReallyQuit", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ReallyQuit", "\346\230\257\347\232\204", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ReallyQuit", "\347\202\271\351\224\231\344\272\206\350\201\202", nullptr));
        label->setText(QCoreApplication::translate("ReallyQuit", "<html><head/><body><p><span style=\" font-size:16pt;\">\350\246\201\351\200\200\345\207\272\346\270\270\346\210\217\345\220\227\357\274\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReallyQuit: public Ui_ReallyQuit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALLYQUIT_H
