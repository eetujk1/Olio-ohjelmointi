#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);

    connect(ui->plus, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->minus, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->multiple, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->divide, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);

    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());

    QString buttonName = button->text();
    qDebug() << "Button name: " << buttonName;

    if (state == 1) {
        number1 += buttonName;
        ui->num1->setText(number1);

    }

    else if (state == 2) {
        number2 += buttonName;
        ui->num2->setText(number2);
    }

}

void MainWindow::clearAndEnterClickHandler()
{
    if(sender() == ui->clear) {

    number1.clear();
    number2.clear();

    ui->result->clear();
    ui->num1->clear();
    ui->num2->clear();

    state = 1;

    }

    if(sender()==ui->enter) {
        float num1 = number1.toFloat();
        float num2 = number2.toFloat();

        switch(operand) {

        case 1:
            result = num1 + num2;
            break;

        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            result = num1 / num2;
            break;

        }

        ui->result->setText(QString::number(result));

    }
}

void MainWindow::addSubMulDivClickHandler()
{

    if(sender() == ui->plus) {
        operand = 1;
        state = 2;
    }

    else if(sender() == ui->minus) {
        operand = 2;
        state = 2;
    }

    else if(sender() == ui->multiple) {
        operand = 3;
        state = 2;
    }

    else if(sender() == ui->divide) {
        operand = 4;
        state = 2;
    }

}

void MainWindow::resetLineEdits()
{

}










