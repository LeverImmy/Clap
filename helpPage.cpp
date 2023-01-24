#include "mainwindow.h"
#include "./ui_mainwindow.h"


/***帮助界面按钮***/
void MainWindow::on_helpToMainButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // 回到首页，所以置index为0
}
