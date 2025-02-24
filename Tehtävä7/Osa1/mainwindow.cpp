#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LisaaNappi_clicked()
{
    // 1. Lue numero elementistä
    QString str = ui->lineEdit->text();
    int num = str.toInt();
    // 2. Kasvata numeroa yhdellä
    num++;
    // 3. Aseta numero takaisin elementtiin
    QString uusiStr = QString::number(num);
    ui->lineEdit->setText(uusiStr);
}


void MainWindow::on_Reset_clicked()
{
    int nolla = 0;
    QString reset = QString::number(nolla);
    ui->lineEdit->setText(reset);

}

