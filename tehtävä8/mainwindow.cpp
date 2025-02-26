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
    if (timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_start_clicked()
{

    P1Time = gameTime;
    P2Time = gameTime;
    currentPlayer = 1;

    ui->progressBar->setRange(0, gameTime);
    ui->progressBar_2->setRange(0, gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);

    //käynnistetään ajastin
    timer = new QTimer(this);
    connect(timer,
            &QTimer::timeout,
            this,
            &MainWindow::updateProgressBar);
    timer->setInterval(1000);
    timer->start();
    ui->label->setText("Game ongoing");

}

void MainWindow::updateProgressBar() {

    if (currentPlayer == 1) {
        P1Time=P1Time-1;
        ui->progressBar->setValue(P1Time);
        if (P1Time == 0) {
            timer->stop();
            delete timer;
            timer = nullptr;
            ui->label->setText("Player 2 won!!");
            qDebug() << "Pelaaja 2 Voitti";

        }
    } else if (currentPlayer == 2) {
        P2Time=P2Time-1;
        ui->progressBar_2->setValue(P2Time);
     if (P2Time==0) {
        timer->stop();
        delete timer;
        timer = nullptr;
        ui->label->setText("Player 1 won!!");
        qDebug() << "Pelaaja 2 hävisi pelin!";
     }
    }

}

void MainWindow::on_pushButton_clicked()
{
    currentPlayer=2;

}


void MainWindow::on_pushButton_2_clicked()
{
    currentPlayer=1;
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);
    timer->stop();
    delete timer;
    timer = nullptr;
    ui->label->setText("Choose gametime and start the game!");

}


void MainWindow::on_shortTime_clicked()
{
    gameTime = 120;
}



void MainWindow::on_pushButton_5_clicked()
{
    gameTime = 300;
}


void MainWindow::on_label_linkActivated(const QString &link)
{

}

