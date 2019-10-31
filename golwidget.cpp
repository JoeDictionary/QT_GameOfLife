#include "golwidget.h"
#include <iostream>

GolWidget::GolWidget(QWidget *parent) : QWidget(parent)
{

}

void GolWidget::paintEvent(QPaintEvent *event)
{
    // https://stackoverflow.com/questions/24672146/qpainter-draw-line
    // https://www.youtube.com/watch?v=tc3nlNEAdig
    int width = 30;
    int height = 30;
    int cell_size = 20;
    QPainter grid(this);
    QVector<QRectF> rect_vec;

    for (int y = 1; y < height+1; y++) {
        for (int x = 1; x < width+1; x++){
            rect_vec.push_back(QRectF(cell_size*x, cell_size*y, cell_size, cell_size));
        }
    }

    grid.drawRects(rect_vec);
}

void GolWidget::mousePressEvent(QMouseEvent *event)
{
    std::cout << event << std::endl;
}
