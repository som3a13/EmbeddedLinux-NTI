/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QLabel *jog;
    QPushButton *power;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *incTemp;
    QPushButton *decTemp;
    QLabel *Temp;
    QLabel *currentTemp;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(801, 600);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        jog = new QLabel(centralwidget);
        jog->setObjectName(QString::fromUtf8("jog"));
        jog->setGeometry(QRect(50, 100, 471, 441));
        jog->setPixmap(QPixmap(QString::fromUtf8("assets/jog-off.png")));
        power = new QPushButton(centralwidget);
        power->setObjectName(QString::fromUtf8("power"));
        power->setGeometry(QRect(700, 130, 71, 71));
        power->setStyleSheet(QString::fromUtf8("image: url(:/assets/assets/power-on.png);\n"
"border: none;\n"
""));
        power->setIconSize(QSize(300, 300));
        power->setCheckable(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 290, 281, 211));
        label_3->setPixmap(QPixmap(QString::fromUtf8("assets/pressed-bg-down.png")));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 140, 281, 211));
        label_4->setPixmap(QPixmap(QString::fromUtf8("assets/pressed-bg-up.png")));
        incTemp = new QPushButton(centralwidget);
        incTemp->setObjectName(QString::fromUtf8("incTemp"));
        incTemp->setGeometry(QRect(210, 240, 31, 25));
        incTemp->setStyleSheet(QString::fromUtf8("image: url(:/assets/assets/temp-up-pressed.png);\n"
"border: none;"));
        decTemp = new QPushButton(centralwidget);
        decTemp->setObjectName(QString::fromUtf8("decTemp"));
        decTemp->setGeometry(QRect(210, 360, 31, 31));
        decTemp->setAutoFillBackground(false);
        decTemp->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/assets/assets/temp-down-pressed.png);\n"
""));
        Temp = new QLabel(centralwidget);
        Temp->setObjectName(QString::fromUtf8("Temp"));
        Temp->setGeometry(QRect(190, 280, 71, 71));
        QFont font;
        font.setPointSize(42);
        Temp->setFont(font);
        currentTemp = new QLabel(centralwidget);
        currentTemp->setObjectName(QString::fromUtf8("currentTemp"));
        currentTemp->setGeometry(QRect(280, 290, 67, 17));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 80, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/assets/assets/fan-4-on.png);\n"
"border: none;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 801, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        jog->setText(QString());
        power->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        incTemp->setText(QString());
        decTemp->setText(QString());
        Temp->setText(QCoreApplication::translate("MainWindow", "35", nullptr));
        currentTemp->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
