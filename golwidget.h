#ifndef GOLWIDGET_H
#define GOLWIDGET_H

#include <QWidget>
#include <QPainter>

class GolWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GolWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

signals:

public slots:

};

#endif // GOLWIDGET_H
