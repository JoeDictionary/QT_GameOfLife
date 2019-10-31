#include "golwidget.h"
#include <iostream>
#include <QMouseEvent>
#include <QColor>
#include <qmath.h>

GolWidget::GolWidget(QWidget *parent) : QWidget(parent)
{

}

void GolWidget::paintEvent(QPaintEvent *event)
{
    // https://stackoverflow.com/questions/24672146/qpainter-draw-line
    // https://www.youtube.com/watch?v=tc3nlNEAdig
    QPainter painter(this);
    widthC = 30;
    heightC = 30;
    cell_size = 20;

    drawGrid(painter);

    //QRect r(0,0,cell_size, cell_size);
    //painter.fillRect(r, QColor("black"));
    //cellVec.push_back(r);

    drawCells(painter);

}

void GolWidget:: drawGrid(QPainter &painter){
    int widthPlane = cell_size * widthC;
    int heightPlane = cell_size * heightC;

    for (int i = 0; i < widthC+1; i++){
        painter.drawLine(i*cell_size, 0, i*cell_size, heightPlane);
    }
    for (int i = 0; i < heightC+1; i++){
        painter.drawLine(0, i*cell_size, widthPlane, i*cell_size);
    }
}

void GolWidget::drawCells(QPainter &painter)
{
    for (QRect rect : cellVec){
        painter.fillRect(rect, QColor("black"));
    }
}

void GolWidget::mousePressEvent(QMouseEvent *event)
{
    int x = floor(event->x()/cell_size);
    int y = floor(event->y()/cell_size);
    std::cout << "X: " << x << std::endl << "Y: " << y << std::endl;
    cellVec.push_back(QRect(x*cell_size, y*cell_size, cell_size, cell_size));
    update();
}

