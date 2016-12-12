#ifndef DIALOGCHEFAGENCE_H
#define DIALOGCHEFAGENCE_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class DialogChefAgence;
}

class DialogChefAgence : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChefAgence(QWidget *parent = 0);
    ~DialogChefAgence();

private slots:
    void on_pushButtonQuitter_clicked();

private:
    Ui::DialogChefAgence *ui;
};

#endif // DIALOGCHEFAGENCE_H
