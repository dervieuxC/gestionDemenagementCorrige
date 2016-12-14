#ifndef DIALOGSALARIE_H
#define DIALOGSALARIE_H
#include "dialogpermis.h"
#include <QDialog>

namespace Ui {
class DialogSalarie;
}

class DialogSalarie : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSalarie(QWidget *parent = 0);
    ~DialogSalarie();

private slots:
    void on_pushButtonPasserPermis_clicked();

private:
    Ui::DialogSalarie *ui;
};

#endif // DIALOGSALARIE_H
