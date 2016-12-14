#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>
#include <QVector>
#include <QDebug>
#include "salarie.h"
#include "agence.h"
#include "permis.h"
#include "garage.h"
#include "dialogsalarie.h"
#include "dialogchefentreprise.h"
#include "dialogchefagence.h"
#include "dialogcommercial.h"

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

    void on_pushButtonConnexion_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Agence> vectAgence;
    QVector<Salarie> vectSalarie;
    QVector<Permis> vectPermis;
    Agence agenceChoisis;
    void chargerPermis();
    void chargerAgences();
    void chargerSalaries();
    void AjouterPermis(int idPermis, QString libellePermis);
    void AjouterSalarie(int idSalarie);
    void AjouterAgence(int idAgence);
};

#endif // MAINWINDOW_H
