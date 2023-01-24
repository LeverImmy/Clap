#include "mainwindow.h"
#include "./ui_mainwindow.h"

/***暂停页面的所有按钮***/
void MainWindow::on_backToGameButton_clicked()
{
    // ...
    // 恢复游戏的各个设置

    ui->stackedWidget->setCurrentIndex(4); // 转到游戏页面，置 index 为 4
}

void MainWindow::on_backToMainPageButton_clicked()
{
    // ...
    // 提问是否保存
    ui->stackedWidget->setCurrentIndex(0); // 回到首页，所以置index为0
}
