#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Tila nyt" << tila;
    ui->Numero1->setEnabled(true);
    ui->Numero2->setEnabled(false);
    ui->Tulos->setEnabled(false);
    ui->Add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_Add_clicked()
{
    if (tila == 3) {
    QString num1Str = ui->Numero1->text();
    int num1 = num1Str.toInt();
    QString num2Str = ui->Numero2->text();
    int num2 = num2Str.toInt();

    int result = num1 + num2;
    qDebug() << "Yhteenlasku:" << result << "=" << num1 << "+" << num2;


    QString resStr = QString::number(result);
    ui->Tulos->setText(resStr);

    tila = 1;
    qDebug() << "Laskun jalkeen tila"<<tila;
    ui->Numero1->setEnabled(true);
    ui->Numero2->setEnabled(false);
    ui->Tulos->setEnabled(false);
    ui->Add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);

    } else {
        qDebug() << "Virhe molempia numeroita ei syötetty";
    }
}


void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
}





void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N9_clicked()
{

    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_sub_clicked()
{
    if (tila ==3){
    QString num1Str = ui->Numero1->text();
    int num1 = num1Str.toInt();
    QString num2Str = ui->Numero2->text();
    int num2 = num2Str.toInt();

    int result = num1 - num2;
    qDebug() << "Vähennyslasku:" << result << "=" << num1 << "-" << num2;


    QString resStr = QString::number(result);
    ui->Tulos->setText(resStr);

    tila = 1;
    qDebug() << "Laskun jalkeen tila"<<tila;
    ui->Numero1->setEnabled(true);
    ui->Numero2->setEnabled(false);
    ui->Tulos->setEnabled(false);
    ui->Add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);

    } else {
        qDebug() << "Virhe molempia numeroita ei syötetty";
    }
}


void MainWindow::on_mul_clicked()
{
    if (tila==3) {
    QString num1Str = ui->Numero1->text();
    int num1 = num1Str.toInt();
    QString num2Str = ui->Numero2->text();
    int num2 = num2Str.toInt();

    int result = num1 * num2;
    qDebug() << "Kertolasku:" << result << "=" << num1 << "*" << num2;

    QString resStr = QString::number(result);
    ui->Tulos->setText(resStr);

    tila = 1;
    qDebug() << "Laskun jalkeen tila"<<tila;
    ui->Numero1->setEnabled(true);
    ui->Numero2->setEnabled(false);
    ui->Tulos->setEnabled(false);
    ui->Add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);

    } else {
        qDebug() << "Virhe molempia numeroita ei syötetty";
    }
}


void MainWindow::on_div_clicked()
{
    if (tila ==3) {
    QString num1Str = ui->Numero1->text();
    float num1 = num1Str.toFloat();
    QString num2Str = ui->Numero2->text();
    float num2 = num2Str.toFloat();

    double result = num1 / num2;
    qDebug()<<"Jakolasku" << result << "=" << num1 << "/" << num2;

    QString resStr = QString::number(result);
    ui->Tulos->setText(resStr);

    tila = 1;
    ui->Numero1->setEnabled(true);
    ui->Numero2->setEnabled(false);
    ui->Tulos->setEnabled(false);
    ui->Add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);
    qDebug() << "Laskun jalkeen tila"<<tila;
    } else {
        qDebug() << "Virhe molempia numeroita ei syötetty";
    }
}

void MainWindow::numberClickHandler(int n)
{

qDebug() << "Valittu numero=" << n;
    QString str = QString::number(n);
    if (tila == 1) {
        ui->Numero1->setText(str);
    } else if (tila == 2) {
        ui->Numero2->setText(str);
    }
}

void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_clear_clicked()
{

}


void MainWindow::on_enter_clicked()
{


    if (tila == 3) {
        tila =1;
    }else {
        tila++;
    }
    qDebug() << "Siirrytty tilaan" << tila;

    // käyttöliittymän elementtien aktivointi
    if (tila == 1) {
        ui->Numero1->setEnabled(true);
        ui->Numero2->setEnabled(false);
        ui->Tulos->setEnabled(false);
        ui->Add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    } else if (tila ==2) {
        ui->Numero1->setEnabled(false);
        ui->Numero2->setEnabled(true);
        ui->Tulos->setEnabled(false);
        ui->Add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    } else if (tila==3) {
        ui->Numero1->setEnabled(false);
        ui->Numero2->setEnabled(false);
        ui->Tulos->setEnabled(true);
        ui->Add->setEnabled(true);
        ui->sub->setEnabled(true);
        ui->mul->setEnabled(true);
        ui->div->setEnabled(true);
    }
}

