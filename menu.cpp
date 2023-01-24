#include "mainwindow.h"
#include "./ui_mainwindow.h"


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
