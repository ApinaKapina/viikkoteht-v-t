#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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
    void on_start_clicked();
    void updateProgressBar();


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_shortTime_clicked();

    void on_pushButton_5_clicked();

    void on_label_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    int P1Time;
    int P2Time;
    int gameTime = 120;
    int currentPlayer;
    QTimer *timer = nullptr;
};
#endif // MAINWINDOW_H
