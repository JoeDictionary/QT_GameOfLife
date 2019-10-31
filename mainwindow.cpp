#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    GolWidget mygame(new GolWidget(this));
    ui->setupUi(this);
    // gameLayout->addWidget(mygame);
}





MainWindow::~MainWindow()
{
    delete ui;
}
