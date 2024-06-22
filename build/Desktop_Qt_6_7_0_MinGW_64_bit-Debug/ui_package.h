/********************************************************************************
** Form generated from reading UI file 'package.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKAGE_H
#define UI_PACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_package
{
public:
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *package)
    {
        if (package->objectName().isEmpty())
            package->setObjectName("package");
        package->resize(800, 550);
        label_2 = new QLabel(package);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 230, 61, 131));
        label_4 = new QLabel(package);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 235, 71, 121));
        label_6 = new QLabel(package);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 230, 61, 131));
        label_7 = new QLabel(package);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(670, 70, 71, 181));
        pushButton = new QPushButton(package);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 20, 91, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font: 24pt \"Microsoft YaHei UI\";"));
        pushButton_2 = new QPushButton(package);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 170, 80, 61));
        pushButton_3 = new QPushButton(package);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 170, 80, 61));
        pushButton_4 = new QPushButton(package);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(330, 170, 80, 61));

        retranslateUi(package);

        QMetaObject::connectSlotsByName(package);
    } // setupUi

    void retranslateUi(QWidget *package)
    {
        package->setWindowTitle(QCoreApplication::translate("package", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("package", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("package", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("package", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("package", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">\350\203\214</span></p><p align=\"center\"><span style=\" font-size:48pt;\">\345\214\205</span></p><p align=\"center\"><span style=\" font-size:48pt;\"><br/></span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("package", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("package", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("package", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("package", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class package: public Ui_package {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKAGE_H
