#ifndef DIALOGAJOUTEREMPLOYE_H
#define DIALOGAJOUTEREMPLOYE_H

#include <QDialog>

namespace Ui {
class DialogAjouterEmploye;
}

class DialogAjouterEmploye : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogAjouterEmploye(QWidget *parent = 0);
    ~DialogAjouterEmploye();
    QString getNomEmploye();
    QString getPrenomEmploye();
    QString getRueEmploye();
    QString getVilleEmploye();
    QString getCPEmploye(); // code postal
    QString getTelEmploye();
    QString getDateEmploye();
    QString getTypeEmploye();
    QString getLoginEmploye();



private:
    Ui::DialogAjouterEmploye *ui;
};

#endif // DIALOGAJOUTEREMPLOYE_H
