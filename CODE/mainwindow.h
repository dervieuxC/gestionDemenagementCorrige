#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void ChargeLesSalaries();
    ~MainWindow();

private slots:
    void on_actionQuitter_triggered();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
