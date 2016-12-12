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
    /*
    QString getNomAgence();
    QString getRueAgence();
    QString getVilleAgence();
    QString getCPAgence();
    QString getTelAgence();
    QString getFaxAgence();
    QString getMailAgence();
    */
private:
    Ui::DialogAgence *ui;
};

#endif // DIALOGAGENCE_H
