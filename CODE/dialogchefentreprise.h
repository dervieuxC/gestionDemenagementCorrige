#ifndef DIALOGCHEFENTREPRISE_H
#define DIALOGCHEFENTREPRISE_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class DialogChefEntreprise;
}

class DialogChefEntreprise : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChefEntreprise(QWidget *parent = 0);
    ~DialogChefEntreprise();

private slots:
    void on_pushButtonChefQuitter_clicked();

    void on_action_Quitter_triggered();

private:
    Ui::DialogChefEntreprise *ui;
};

#endif // DIALOGCHEFENTREPRISE_H
