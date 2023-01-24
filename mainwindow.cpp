#include "mainwindow.h"
#include "./ui_mainwindow.h"


/***构造函数和析构函数***/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), sound(new QMediaPlayer), soundOutput(new QAudioOutput), BGM(new QMediaPlayer), BGMOutput(new QAudioOutput)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); // 默认显示第0页（mainPage）

    /***设置音效***/
    sound->setAudioOutput(soundOutput);
    soundOutput->setVolume(0.5f);

    /***设置 BGM ***/
    BGM->setAudioOutput(BGMOutput);
    BGM->setSource(QUrl::fromLocalFile("./resources/bgm.mp3"));
    BGM->setLoops(QMediaPlayer::Infinite);
    BGMOutput->setVolume(0.5f);
//    BGM->play();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete sound;
    delete soundOutput;
    delete BGM;
    delete BGMOutput;
}
