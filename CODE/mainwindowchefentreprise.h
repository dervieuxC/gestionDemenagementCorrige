#ifndef MAINWINDOWCHEFENTREPRISE_H
#define MAINWINDOWCHEFENTREPRISE_H

#include <QMainWindow>

namespace Ui {
class MainWindowChefEntreprise;
}

class MainWindowChefEntreprise : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowChefEntreprise(QWidget *parent = 0);
    ~MainWindowChefEntreprise();

private slots:
    void on_pushButtonChefAjouterAgence_clicked();

    void on_pushButtonChefEngager_clicked();

private:
    Ui::MainWindowChefEntreprise *ui;
};

#endif // MAINWINDOWCHEFENTREPRISE_H
