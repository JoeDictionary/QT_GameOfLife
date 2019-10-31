#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    GolWidget mygame(this);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
