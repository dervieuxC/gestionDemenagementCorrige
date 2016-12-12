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

private:
    Ui::MainWindowChefEntreprise *ui;
};

#endif // MAINWINDOWCHEFENTREPRISE_H
