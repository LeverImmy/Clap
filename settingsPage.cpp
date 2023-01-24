#include "mainwindow.h"
#include "./ui_mainwindow.h"


/***设置界面按钮***/
void MainWindow::on_settingsToMainButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // 回到首页，所以置index为0
}

/***音效滑动条***/
void MainWindow::on_sound_HSlider_valueChanged(int value)
{
    soundOutput->setVolume((float)value / 100); // 设置音效音量
    ui->soundshowLabel->setText(QString::number(value)); // 显示当前音效音量
}

/***BGM 滑动条***/
void MainWindow::on_BGM_HSlider_valueChanged(int value)
{
    BGMOutput->setVolume((float)value / 100); // 设置 BGM 音量
    ui->BGMshowLabel->setText(QString::number(value)); // 显示当前 BGM 音量
}
