#ifndef DIALOGPERMIS_H
#define DIALOGPERMIS_H

#include <QDialog>
#include <QString>
#include <QDate>
#include "permis.h"

namespace Ui {
class DialogPermis;
}

class DialogPermis : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPermis(QWidget *parent = 0);
    ~DialogPermis();

    QDate getDate();
    QString getPermis();
private slots:

    void on_dateEditPermis_editingFinished();

    void on_comboBoxPermis_currentTextChanged(const QString &arg1);

private:
    Ui::DialogPermis *ui;
    void activatedOkButton();
};

#endif // DIALOGPERMIS_H
