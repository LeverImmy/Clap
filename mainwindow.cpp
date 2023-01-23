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


/***菜单栏按钮***/
/***文件***/
void MainWindow::on_action_O_triggered()
{
    QMessageBox::information(this, "提示", "还没实现这个功能");
}

void MainWindow::on_action_S_triggered()
{
    QMessageBox::information(this, "提示", "还没实现这个功能");
}

void MainWindow::on_action_X_triggered()
{
    this->close();
}

/***关于***/
void MainWindow::on_action_v1_0_1_triggered()
{
    QMessageBox::information(this, "拍手游戏v1.0.0", "作者：三个臭皮匠队");
}

/***首页按钮***/
void MainWindow::on_startGameButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // 去开始游戏界面，index为1
}

void MainWindow::on_settingsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2); // 去设置界面，index为2
}

void MainWindow::on_helpButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3); // 去帮助界面，index为3
}

void MainWindow::on_exitGameButton_clicked()
{
    this->close();
}


/***开始游戏界面按钮***/
void MainWindow::on_startToMainButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // 回到首页，所以置index为0
}


/***设置界面按钮***/
void MainWindow::on_settingsToMainButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // 回到首页，所以置index为0
}


/***帮助界面按钮***/
void MainWindow::on_helpToMainButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // 回到首页，所以置index为0
}
