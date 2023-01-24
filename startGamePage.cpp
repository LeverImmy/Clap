#include "mainwindow.h"
#include "./ui_mainwindow.h"


/***开始游戏界面按钮***/
void MainWindow::on_startToMainButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // 回到首页，所以置index为0
}

void MainWindow::on_mode1Button_clicked()
{
    // ...
    // 进行设置
    ui->stackedWidget->setCurrentIndex(4); // 去游戏界面
}

void MainWindow::on_mode2Button_clicked()
{
    // ...
    // 进行设置
    ui->stackedWidget->setCurrentIndex(4); // 去游戏界面
}

void MainWindow::on_mode3Button_clicked()
{
    // ...
    // 进行设置
    ui->stackedWidget->setCurrentIndex(4); // 去游戏界面
}

void MainWindow::on_mode4Button_clicked()
{
    // ...
    // 进行设置
    ui->stackedWidget->setCurrentIndex(4); // 去游戏界面
}
