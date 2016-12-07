#ifndef MAINWINDOWCHEF_H
#define MAINWINDOWCHEF_H

#include <QMainWindow>

namespace Ui {
class MainWindowChef;
}

class MainWindowChef : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowChef(QWidget *parent = 0);
    ~MainWindowChef();

private:
    Ui::MainWindowChef *ui;
};

#endif // MAINWINDOWCHEF_H
