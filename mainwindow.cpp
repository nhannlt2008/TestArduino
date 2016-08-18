#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtDebug>

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

    arduino = new QSerialPort;
}

MainWindow::~MainWindow()
{
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
