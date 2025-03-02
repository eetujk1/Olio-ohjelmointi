#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QFont>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    pQTimer = new QTimer(this);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout);

    connect(ui->time120sec,&QPushButton::clicked, this, &MainWindow::setGameTime120sec);
    connect(ui->time5min,&QPushButton::clicked, this, &MainWindow::setGameTime5min);
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::endGame);
    connect(ui->switch1, &QPushButton::clicked, this, &MainWindow::switchPlayer1);
    connect(ui->switch2, &QPushButton::clicked, this, &MainWindow::switchPlayer2);

    setGameInfoText("Select playtime and start game!", 12);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    updateTime();
}

void MainWindow::updateProgressBar()

{
    if(gameTime > 0) {

    int aikaajaljella1 = (player1Time*100)/gameTime;
    int aikaajaljella2 = (player2Time*100)/gameTime;

    ui->progressBar1->setValue(aikaajaljella1);
    ui->progressBar2->setValue(aikaajaljella2);

    }

}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    ui->label->setText(text);

    QFont font = ui->label->font();
    font.setPointSize(fontSize);
    ui->label->setFont(font);
}

void MainWindow::setGameTime120sec()
{
    player1Time = 120;
    player2Time = 120;
    gameTime = 120;

    updateProgressBar();

}

void MainWindow::setGameTime5min()
{
    player1Time = 300;
    player2Time = 300;
    gameTime = 300;

    updateProgressBar();

}

void MainWindow::startGame()
{
    if(player1Time>0 && player2Time>0) {

        currentPlayer = 1;
        setGameInfoText("Player 1's turn!", 12);
        pQTimer->start(1000);
        updateProgressBar();

    }
}

void MainWindow::switchPlayer1()
{
    if(currentPlayer==2) {
        currentPlayer=1;
        setGameInfoText("Player 1's turn", 12);

    }

}

void MainWindow::switchPlayer2()
{
    if(currentPlayer==1) {
        currentPlayer=2;
        setGameInfoText("Player 2's turn", 12);
    }

}

void MainWindow::updateTime()
{
    if(currentPlayer==1 && player1Time>0){
        player1Time--;

        if(player1Time==0) {
            endGame();
            return;
        }
    }

    if(currentPlayer==2 && player2Time>0){
        player2Time--;

        if(player2Time==0) {
            endGame();
            return;
        }
}

    updateProgressBar();

}

void MainWindow::endGame()
{
    pQTimer->stop();

    if(player1Time==0){
        setGameInfoText("Player 2 wins!", 12);
    }

    else if(player2Time==0){
        setGameInfoText("Player 1 wins!", 12);
    }

    else {
        setGameInfoText("Game over!", 12);
    }


    player1Time=0;
    player2Time=0;
    gameTime=0;

    updateProgressBar();

}


