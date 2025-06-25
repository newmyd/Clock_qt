#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

typedef long long LL;

class Thread;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_sc_clicked();
    void showTim();

private:
    Ui::MainWindow *ui;
    bool flag = false;
    LL t = 0;
    LL lstTime = 0;
    void timeOut();
    std::pair<LL, LL> find(LL w, std::string s);
    LL getT();
    LL getTim();
    QString toStr(LL n);
    void start();
    void stop();
    void clean();
    Thread *thread;
};
#endif // MAINWINDOW_H
