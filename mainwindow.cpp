#include "mainwindow.h"
#include "./ui_mainwindow.h"


/***构造函数和析构函数***/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); // 默认显示第0页（mainPage）
}

MainWindow::~MainWindow()
{
    delete ui;
}
