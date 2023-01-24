#include "mainwindow.h"
#include "./ui_mainwindow.h"

/***暂停游戏按钮***/
void MainWindow::on_pauseButton_clicked()
{
    // ...
    // 暂停游戏的各个设置

    ui->stackedWidget->setCurrentIndex(5); // 转到暂停页面，置 index 为 5
}
