#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QVector>
#include <QMainWindow>
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
    ~MainWindow();

    QVector<Permis> getVectPermis() const;
    void setVectPermis(const QVector<Permis> &value);

    QVector<Agence> getVectAgences() const;
    void setVectAgences(const QVector<Agence> &value);

    QVector<Salarie> getVectSalariesNonAgences() const;
    void setVectSalariesNonAgences(const QVector<Salarie> &value);

    QVector<Garage> getVectGarages() const;
    void setVectGarages(const QVector<Garage> &value);

    Agence *getAgenceChoisis() const;
    void setAgenceChoisis(Agence *value);

private:
    Ui::MainWindow *ui;
    // Vecteur qui contient tous les salariés hors des agences.
    QVector<Salarie> vectSalariesNonAgences;
    QVector<Agence> vectAgences;
    QVector<Permis> vectPermis;
    QVector<Garage> vectGarages;
    Agence* agenceChoisis;
};

#endif // MAINWINDOW_H
