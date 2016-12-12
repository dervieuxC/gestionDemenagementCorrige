#ifndef DIALOGDEMANDEABSENCE_H
#define DIALOGDEMANDEABSENCE_H

#include <QDialog>

namespace Ui {
class DialogDemandeAbsence;
}

class DialogDemandeAbsence : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDemandeAbsence(QWidget *parent = 0);
    ~DialogDemandeAbsence();

private:
    Ui::DialogDemandeAbsence *ui;
};

#endif // DIALOGDEMANDEABSENCE_H
