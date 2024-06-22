#ifndef TRUE_FALSE_H
#define TRUE_FALSE_H

#include <QDialog>
#include"amywidget.h"
namespace Ui {
class true_false;
}

class true_false : public QDialog
{
    Q_OBJECT

public:
    mywidget*ret;
    explicit true_false(QWidget *parent = nullptr);
    ~true_false();

private slots:
    void on_pushButton_clicked();

    void on_label_linkActivated(const QString &link);

private:
    Ui::true_false *ui;
};

#endif // TRUE_FALSE_H
