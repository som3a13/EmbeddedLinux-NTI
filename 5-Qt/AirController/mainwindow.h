#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTimer> // Include QTimer header
#include <QTcpSocket>
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

private slots:
    void on_power_toggled(bool checked);
// void QLabel_Custom_Click_Event();
    void toggleButtonFlash();


    void on_incTemp_pressed();

    void on_incTemp_released();

    void on_decTemp_pressed();

    void on_decTemp_released();
    void readSocketData();


    void on_pushButton_clicked(bool checked);

private:

    Ui::MainWindow *ui;
    QTimer *flashTimer; // Declare QTimer pointer
    bool flashState;
    QTcpSocket *socket;
};

#endif // MAINWINDOW_H
