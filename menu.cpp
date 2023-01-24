#include "mainwindow.h"
#include "./ui_mainwindow.h"


/***菜单栏按钮***/
/***文件***/
void MainWindow::on_action_O_triggered()
{
    QString filePathName = QFileDialog::getOpenFileName(this, "打开", "./", "文本文档 (*.txt)");
    if (filePathName.isEmpty()) {
        QMessageBox::warning(this, "警告", "已取消打开文件！");
    }
    else {
        QFile openFile(filePathName);
        openFile.open(QIODevice::ReadOnly);
        QByteArray fileContents = openFile.readAll(); // 接下来对 fileContents 进行怎样的操作？
        openFile.close();
    }
    QMessageBox::information(this, "提示", "还没实现这个功能");
}

void MainWindow::on_action_S_triggered()
{
    QString filePathName = QFileDialog::getSaveFileName(this, "另存为", "./", "文本文档 (*.txt)");
    if (filePathName.isEmpty()) {
        QMessageBox::warning(this, "警告", "已取消另存为文件！");
    }
    else {
        QFile writeFile(filePathName);
        writeFile.open(QIODevice::WriteOnly);
//        writeFile.write("?"); // 写一些东西进存档文件
        writeFile.close();
    }
    QMessageBox::warning(this, "提示", "还没实现这个功能");
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
