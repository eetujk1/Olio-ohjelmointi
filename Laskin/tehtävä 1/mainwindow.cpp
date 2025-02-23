#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->count, &QPushButton::clicked,
            this, &MainWindow::handleCount);

    connect(ui->reset, &QPushButton::clicked,
            this, &MainWindow::handleReset);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleCount()
{
    buttonpress++;
    ui->laatikko->setText(QString::number(buttonpress));
}

void MainWindow::handleReset() {

    buttonpress = 0;
    ui->laatikko->setText(QString::number(buttonpress));

}


