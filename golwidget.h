#ifndef GOLWIDGET_H
#define GOLWIDGET_H

#include <QWidget>
#include <QPainter>

class GolWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GolWidget(QWidget *parent = nullptr);
    int widthC;
    int heightC;
    int cell_size;
    QVector<QRect> cellVec;

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

signals:

public slots:
    // void paintPlane(QPainter &painter);
    void drawGrid(QPainter &painter);
    void drawCells(QPainter & painter);
};

#endif // GOLWIDGET_H
