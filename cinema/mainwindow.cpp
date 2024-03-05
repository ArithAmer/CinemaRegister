#include "Error in " Util.relativeFilePath('E:/College/Spring ' 24 / CS2 / Lab_1 / CinemaRegister / mainwindow.h ', ' E : / College / Spring '24/CS2/Lab_1/CinemaRegister' + '/' + Util.path('mainwindow.cpp')) ": SyntaxError: Expected token `)'"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
