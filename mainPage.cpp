#include "mainwindow.h"
#include "./ui_mainwindow.h"


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
