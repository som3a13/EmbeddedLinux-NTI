#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QPixmap>
#include <QPushButton>
#include <QTcpSocket>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap bkgnd("/home/som3a133/AirController/assets/desk3.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
    /*
     *TEMP
     *
    */
    ui->Temp->setText("16");
    ui->Temp->hide();
    ui->incTemp->hide();
    ui->decTemp->hide();

    /*
     *POWER
    */
    ui->power->setCheckable(true);
    flashTimer = new QTimer(this);
    connect(flashTimer, &QTimer::timeout, this, &MainWindow::toggleButtonFlash);
    flashState = false; // Initialize flash state
    flashTimer->start(700); // Set the flashing interval (milliseconds)


    /*
     *JOG
     */
    QPixmap jog("/home/som3a133/AirController/assets/jog-off.png");
    ui->jog->setPixmap(jog);

    /*
     *
     *SOCKET
    */

        socket = new QTcpSocket(this);
        connect(socket, &QTcpSocket::readyRead, this, &MainWindow::readSocketData);



}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_power_toggled(bool checked)
{
    if(checked)
    {
        flashTimer->stop();
        ui->power->setIcon(QIcon("/home/som3a133/AirController/assets/power-on.png"));
        qDebug() << "Button checked";
        QPixmap jogOn("/home/som3a133/AirController/assets/jog.png");
        ui->jog->setPixmap(jogOn);
        ui->Temp->show();
        ui->incTemp->show();
        ui->decTemp->show();
        socket->connectToHost("localhost", 12345); // Adjust host and port as needed

    }
    else
    {
        flashTimer->start();

        ui->power->setIcon(QIcon("/home/som3a133/AirController/assets/power-on.png"));
        QPixmap jogOff("/home/som3a133/AirController/assets/jog-off.png");
        ui->jog->setPixmap(jogOff);

        ui->Temp->hide();
        ui->incTemp->hide();
        ui->decTemp->hide();
        socket->disconnectFromHost();

    }
}
void MainWindow::toggleButtonFlash()
{
    // Toggle the button appearance between normal and flashing
    if (flashState) {
        ui->power->setIcon(QIcon("/home/som3a133/AirController/assets/power-on.png"));

    } else {
        ui->power->setIcon(QIcon("/home/som3a133/AirController/assets/power-off.png"));

    }
    flashState = !flashState; // Toggle the flash state
}


// void MainWindow::QLabel_Custom_Click_Event()
// {


// }













void MainWindow::on_incTemp_pressed()
{
    QPixmap blueflashUp("/home/som3a133/AirController/assets/pressed-bg-up.png");
    ui->label_4->setPixmap(blueflashUp);
    int value = ui->Temp->text().toInt();
    int maxValue = 30; // Example maximum value
    int minValue = 16;   // Example minimum value

    if (value < maxValue)
    {
        ui->Temp->setText(QString::number(value + 1));
    }

}
void MainWindow::on_incTemp_released()
{
    ui->label_4->clear();
}





void MainWindow::on_decTemp_pressed()
{
    QPixmap blueflashDown("/home/som3a133/AirController/assets/pressed-bg-down.png");
    ui->label_3->setPixmap(blueflashDown);
    int value = ui->Temp->text().toInt();
    int maxValue = 30; // Example maximum value
    int minValue = 16;   // Example minimum value

    if (value > minValue)
    {
        ui->Temp->setText(QString::number(value - 1));
    }
}


void MainWindow::on_decTemp_released()
{
    ui->label_3->clear();
}







void MainWindow::readSocketData()
{
    // Read temperature data from the socket
    QByteArray data = socket->readAll();
    double temperature = *reinterpret_cast<double*>(data.data());
    qDebug() << "Received temperature:" << temperature;

    // Update UI with received temperature
    ui->currentTemp->setText(QString::number(temperature));
}









void MainWindow::on_pushButton_clicked(bool checked)
{
    if(checked)
    {
        ui->Temp->hide();
    }
}

