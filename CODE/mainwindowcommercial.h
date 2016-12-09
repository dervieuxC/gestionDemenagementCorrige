#ifndef MAINWINDOWCOMMERCIAL_H
#define MAINWINDOWCOMMERCIAL_H
#include <QMainWindow>
#include <QMessageBox>
#include "dialogajoutdossiercommercial.h"


namespace Ui {
class MainWindowCommercial;
}

class MainWindowCommercial : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowCommercial(QWidget *parent = 0);
    ~MainWindowCommercial();

private slots:
    void on_actionQuitter_triggered();

    void on_pushButtonAjouterDossier_clicked();

    void on_pushButtonSupprimerDossier_clicked();

private:
    Ui::MainWindowCommercial *ui;
};


#endif // MAINWINDOWCHEF_H
