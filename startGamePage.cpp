#include "mainwindow.h"
#include "./ui_mainwindow.h"


/***开始游戏界面按钮***/
void MainWindow::on_startToMainButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // 回到首页，所以置index为0
}
