#ifndef DIALOGAGENCE_H
#define DIALOGAGENCE_H

#include <QDialog>

namespace Ui {
class DialogAgence;
}

class DialogAgence : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogAgence(QWidget *parent = 0);
    ~DialogAgence();
<<<<<<< HEAD
    /*
=======
>>>>>>> ab116adad5ebde2583c631b59f39636352fef60e
    QString getNomAgence();
    QString getRueAgence();
    QString getVilleAgence();
    QString getCPAgence();
    QString getTelAgence();
    QString getFaxAgence();
    QString getMailAgence();
<<<<<<< HEAD
    */
=======

>>>>>>> ab116adad5ebde2583c631b59f39636352fef60e
private:
    Ui::DialogAgence *ui;
};

#endif // DIALOGAGENCE_H
