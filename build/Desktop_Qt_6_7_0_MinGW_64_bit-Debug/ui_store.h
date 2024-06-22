/********************************************************************************
** Form generated from reading UI file 'store.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_H
#define UI_STORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_store
{
public:
    QLabel *label;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *store)
    {
        if (store->objectName().isEmpty())
            store->setObjectName("store");
        store->resize(799, 544);
        label = new QLabel(store);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 20, 141, 81));
        pushButton_1 = new QPushButton(store);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(90, 220, 121, 91));
        pushButton_2 = new QPushButton(store);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 220, 121, 91));
        pushButton_3 = new QPushButton(store);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(570, 220, 121, 91));
        label_2 = new QLabel(store);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 150, 121, 61));
        label_3 = new QLabel(store);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 150, 111, 51));
        label_4 = new QLabel(store);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(563, 145, 121, 41));
        label_5 = new QLabel(store);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(560, 50, 41, 21));
        label_6 = new QLabel(store);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(610, 50, 71, 16));

        retranslateUi(store);

        QMetaObject::connectSlotsByName(store);
    } // setupUi

    void retranslateUi(QWidget *store)
    {
        store->setWindowTitle(QCoreApplication::translate("store", "Form", nullptr));
        label->setText(QCoreApplication::translate("store", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:700; font-style:italic;\">\345\225\206\345\272\227</span></p></body></html>", nullptr));
        pushButton_1->setText(QCoreApplication::translate("store", "\350\264\255\344\271\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("store", "\350\264\255\344\271\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("store", "\350\264\255\344\271\260", nullptr));
        label_2->setText(QCoreApplication::translate("store", "<html><head/><body><p align=\"center\">heal fruit</p><p align=\"center\">100</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("store", "<html><head/><body><p align=\"center\">ap fruit</p><p align=\"center\">200</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("store", "<html><head/><body><p align=\"center\">ex fruit</p><p align=\"center\">150</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("store", "\351\207\221\345\270\201\346\225\260", nullptr));
        label_6->setText(QCoreApplication::translate("store", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class store: public Ui_store {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_H
