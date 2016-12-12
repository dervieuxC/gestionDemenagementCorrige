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
    QString getNomAgence;
    QString getAdresseAgence;
    QString getTelAgence;
    QString getFaxAgence;
    QString getMailAgence;
=======
    QString getNomAgence();
    QString getAdresseAgence();
    int getTelAgence();
    int getFaxAgence();
    QString getMailAgence();

>>>>>>> b1f8564475844abec6f1b3d867cfb52c26a7567b
private:
    Ui::DialogAgence *ui;
};

#endif // DIALOGAGENCE_H
