#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtDebug>
#include <QtWidgets>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalScrollBar->setDisabled(true);
    ui->horizontalScrollBar_2->setDisabled(true);
    ui->horizontalScrollBar_3->setDisabled(true);
    ui->horizontalScrollBar_4->setDisabled(true);
    ui->horizontalScrollBar_5->setDisabled(true);
    ui->horizontalScrollBar_6->setDisabled(true);

    arduino_is_available = false;
    arduino_port_name = "";
    arduino = new QSerialPort;


    /*qDebug() << " Number of available ports: " << QSerialPortInfo::availablePorts().length();
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        qDebug() << "Has vendor ID: " << serialPortInfo.hasVendorIdentifier();
        if(serialPortInfo.hasVendorIdentifier()) {
            qDebug() << "Vendor ID: " << serialPortInfo.vendorIdentifier();
        }
        qDebug() << "Has Product ID: " << serialPortInfo.hasProductIdentifier();
        if(serialPortInfo.hasProductIdentifier()) {
            qDebug() << "Product ID: " << serialPortInfo.productIdentifier();
        }
    }
    */
    /*foreach(const QSerialPortInfo &serialPortInfo,QSerialPortInfo::availablePorts()) {
        if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
            if (serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id) {
                if (serialPortInfo.productIdentifier() == arduino_uno_product_id) {
                    arduino_port_name = serialPortInfo.portName();
                    arduino_is_available = true;
                }
            }
        }
    }

    /*if (arduino_is_available) {
        arduino->setPortName(arduino_port_name);
        arduino->open(QSerialPort::WriteOnly);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);

    } else {
        QMessageBox::warning(this," Port error", "Couldn't find the Arduino");
    }*/

}

MainWindow::~MainWindow()
{
    /*if (arduino->isOpen()) {
        arduino->close();
    }*/
    delete ui;

}

void MainWindow::on_pushButton_clicked(bool checked)
{
    if (ui->pushButton->text()=="ON") {

        ui->pushButton->setText("OFF");
        ui->horizontalScrollBar->setEnabled(true);
        return;

    }
    else {

        ui->pushButton->setText("ON");
        ui->horizontalScrollBar->setDisabled(true);
        return;

    }
}

void MainWindow::on_pushButton_2_clicked(bool checked)
{
    if (ui->pushButton_2->text()=="ON") {

        ui->pushButton_2->setText("OFF");
        ui->horizontalScrollBar_2->setEnabled(true);
        return;

    }
    else {

        ui->pushButton_2->setText("ON");
        ui->horizontalScrollBar_2->setDisabled(true);
        return;

    }
}

void MainWindow::on_pushButton_3_clicked(bool checked)
{
    if (ui->pushButton_3->text()=="ON") {

        ui->pushButton_3->setText("OFF");
        ui->horizontalScrollBar_3->setEnabled(true);
        return;

    }
    else {

        ui->pushButton_3->setText("ON");
        ui->horizontalScrollBar_3->setDisabled(true);
        return;

    }
}

void MainWindow::on_pushButton_4_clicked(bool checked)
{
    if (ui->pushButton_4->text()=="ON") {

        ui->pushButton_4->setText("OFF");
        ui->horizontalScrollBar_4->setEnabled(true);
        return;

    }
    else {

        ui->pushButton_4->setText("ON");
        ui->horizontalScrollBar_4->setDisabled(true);
        return;

    }
}

void MainWindow::on_pushButton_5_clicked(bool checked)
{
    if (ui->pushButton_5->text()=="ON") {

        ui->pushButton_5->setText("OFF");
        ui->horizontalScrollBar_5->setEnabled(true);
        return;

    }
    else {

        ui->pushButton_5->setText("ON");
        ui->horizontalScrollBar_5->setDisabled(true);
        return;

    }
}

void MainWindow::on_pushButton_6_clicked(bool checked)
{
    if (ui->pushButton_6->text()=="ON") {

        ui->pushButton_6->setText("OFF");
        ui->horizontalScrollBar_6->setEnabled(true);
        return;

    }
    else {

        ui->pushButton_6->setText("ON");
        ui->horizontalScrollBar_6->setDisabled(true);
        return;

    }
}
