#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agence.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    agenceChoisis = NULL;
    Agence nouvelleAgence(1, "test", "1 test rue du test test",1023456789, 9876543210, "test@test.test");
    vectAgences.push_back(nouvelleAgence);
    agenceChoisis=&nouvelleAgence;
}

MainWindow::~MainWindow()
{
    delete ui;
}
QVector<Permis> MainWindow::getVectPermis() const
{
    return vectPermis;
}

void MainWindow::setVectPermis(const QVector<Permis> &value)
{
    vectPermis = value;
}
QVector<Agence> MainWindow::getVectAgences() const
{
    return vectAgences;
}

void MainWindow::setVectAgences(const QVector<Agence> &value)
{
    vectAgences = value;
}
QVector<Salarie> MainWindow::getVectSalariesNonAgences() const
{
    return vectSalariesNonAgences;
}

void MainWindow::setVectSalariesNonAgences(const QVector<Salarie> &value)
{
    vectSalariesNonAgences = value;
}
QVector<Garage> MainWindow::getVectGarages() const
{
    return vectGarages;
}

void MainWindow::setVectGarages(const QVector<Garage> &value)
{
    vectGarages = value;
}
Agence *MainWindow::getAgenceChoisis() const
{
    return agenceChoisis;
}

void MainWindow::setAgenceChoisis(Agence *value)
{
    agenceChoisis = value;
}


/*void MainWindow::on_comboBoxAgence_activated(const QString &arg1)
{ if(!arg1.isEmpty() )
    {
        int idAge=0;
        while(idAge<vectAgences.size() && arg1!=vectAgences[idAge].get)
        {
            idAge++;
        }
        if (arg1==vectSections[noSec].getNomSection())
        {
            ui->labelSection->setText(arg1);
            agenceChoisis=&vectAgences[idAge];
        }
    }
    else qDebug()<<"Section vide"<<endl;

}*/



