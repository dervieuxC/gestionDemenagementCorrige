#ifndef DIALOGCOMMERCIAL_H
#define DIALOGCOMMERCIAL_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class DialogCommercial;
}

class DialogCommercial : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCommercial(QWidget *parent = 0);
    ~DialogCommercial();

private slots:
    void on_actionQuitter_triggered();

private:
    Ui::DialogCommercial *ui;
};

#endif // DIALOGCOMMERCIAL_H
