#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void timeout();

private slots:
    void updateProgressBar();
    void setGameInfoText(QString, short);
    void setGameTime120sec();
    void setGameTime5min();
    void startGame();
    void switchPlayer1();
    void switchPlayer2();
    void updateTime();
    void endGame();


private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short gameTime;
    short currentPlayer;
    QTimer *pQTimer;

};
#endif // MAINWINDOW_H
