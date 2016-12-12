#ifndef DIALOGGERERDEMENAGEMENT_H
#define DIALOGGERERDEMENAGEMENT_H

#include <QDialog>

namespace Ui {
class DialogGererDemenagement;
}

class DialogGererDemenagement : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGererDemenagement(QWidget *parent = 0);
    ~DialogGererDemenagement();
    QString getDateDebut();
    QString getDateFin();
    QString getEtat();

private slots:
    void on_pushButtonAnnuler_clicked();

private:
    Ui::DialogGererDemenagement *ui;
};

#endif // DIALOGGERERDEMENAGEMENT_H
