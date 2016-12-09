#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
<<<<<<< HEAD
#include "salarie.h"
#include "agence.h"
#include "permis.h"
#include "garage.h"
=======
>>>>>>> 52cfe887670317f773567bac8c2dfc7cd0ea1e17

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
