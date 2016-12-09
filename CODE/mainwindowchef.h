#ifndef MAINWINDOWCHEF_H
#define MAINWINDOWCHEF_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindowChef;
}

class MainWindowChef : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowChef(QWidget *parent = 0);
    ~MainWindowChef();

private slots:
    void on_pushButtonQuitter_clicked();

    void on_pushButtonCreerAgence_clicked();

private:
    Ui::MainWindowChef *ui;
};

#endif // MAINWINDOWCHEF_H
