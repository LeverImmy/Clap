#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QIcon>
#include <QStack>
#include <QQueue>
#include <QFileDialog>
#include <QDebug>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    /***菜单栏按钮***/
    /***文件***/
    void on_action_O_triggered(); // 打开
    void on_action_S_triggered(); // 另存为
    void on_action_X_triggered(); // 关闭
    /***关于***/
    void on_action_v1_0_1_triggered(); // 拍手游戏v1.0.0

    /***首页按钮***/
    void on_startGameButton_clicked(); // 开始游戏
    void on_settingsButton_clicked(); // 设置
    void on_helpButton_clicked(); // 帮助
    void on_exitGameButton_clicked(); // 退出游戏
    /***开始游戏界面按钮***/
    void on_startToMainButton_clicked(); // 回到首页
    /***设置界面按钮***/
    void on_settingsToMainButton_clicked(); // 回到首页
    /***帮助界面按钮***/
    void on_helpToMainButton_clicked(); // 回到首页

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
