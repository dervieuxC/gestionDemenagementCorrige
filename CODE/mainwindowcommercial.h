#ifndef MAINWINDOWCHEF_H
#define MAINWINDOWCHEF_H

#include <QMainWindow>
#include <QMessageBox>
#include <QModelIndex>
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

    void on_tableWidgetCommercial_clicked(const QModelIndex &index);

private:
    Ui::MainWindowCommercial *ui;
};

#endif // MAINWINDOWCHEF_H
