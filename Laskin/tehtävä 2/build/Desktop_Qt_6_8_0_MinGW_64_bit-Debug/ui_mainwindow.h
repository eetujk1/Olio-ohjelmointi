/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N3;
    QLineEdit *result;
    QLineEdit *num2;
    QLineEdit *num1;
    QPushButton *N2;
    QPushButton *N5;
    QPushButton *N1;
    QPushButton *N4;
    QPushButton *N8;
    QPushButton *N7;
    QPushButton *N9;
    QPushButton *N6;
    QPushButton *N0;
    QPushButton *clear;
    QPushButton *enter;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *multiple;
    QPushButton *divide;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(280, 60, 61, 21));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(330, 20, 91, 20));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(220, 20, 91, 20));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(110, 20, 91, 20));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(200, 60, 61, 21));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(200, 90, 61, 21));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(120, 60, 61, 21));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(120, 90, 61, 21));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(200, 120, 61, 21));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(120, 120, 61, 21));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(280, 120, 61, 21));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(280, 90, 61, 21));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(120, 150, 61, 21));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(200, 150, 61, 21));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(280, 150, 61, 21));
        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(360, 60, 61, 21));
        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");
        minus->setGeometry(QRect(360, 90, 61, 21));
        multiple = new QPushButton(centralwidget);
        multiple->setObjectName("multiple");
        multiple->setGeometry(QRect(360, 120, 61, 21));
        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(360, 150, 61, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        num2->setText(QString());
        num1->setText(QString());
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiple->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
