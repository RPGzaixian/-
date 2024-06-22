#include <QtWidgets>

class RectWidget : public QWidget
{
public:
    RectWidget(QWidget *parent = nullptr) : QWidget(parent)
    {
        value = 100; // 初始值
    }

    void setValue(int val)
    {
        value = val;
        update(); // 更新绘制
    }

protected:
    void paintEvent(QPaintEvent *event) override
    {
        QPainter painter(this);
        painter.setBrush(Qt::blue);
        painter.drawRect(50, 50, value, 50); // 长方形的起始点坐标和宽高
    }

private:
    int value;
};
