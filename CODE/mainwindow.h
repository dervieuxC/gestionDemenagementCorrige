#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "salarie.h"
#include "agence.h"
#include "permis.h"
#include "garage.h"

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


private slots:
    void on_actionQuitter_triggered();

    void on_pushButtonConnexion_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
