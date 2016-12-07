#ifndef MAINWINDOWSALARIE_H
#define MAINWINDOWSALARIE_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindowSalarie;
}

class MainWindowSalarie : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowSalarie(QWidget *parent = 0);
    ~MainWindowSalarie();

private slots:
    void on_action_Quitter_triggered();

private:
    Ui::MainWindowSalarie *ui;
};

#endif // MAINWINDOWSALARIE_H
