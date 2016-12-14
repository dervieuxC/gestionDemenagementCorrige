#include "dialogpermis.h"
#include "ui_dialogpermis.h"

DialogPermis::DialogPermis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPermis)
{
    ui->setupUi(this);
}

DialogPermis::~DialogPermis()
{
    delete ui;
}
QString DialogPermis::getPermis()
{
    return ui->comboBoxPermis->currentText();
}
QDate DialogPermis::getDate()
{
    return ui->dateEditPermis->date();
}
void DialogPermis::activatedOkButton(){
    ui->pushButtonOk->setEnabled((ui->comboBoxPermis->currentText()!="")&& (ui->dateEditPermis->date().isNull()));
}
void DialogPermis::on_dateEditPermis_editingFinished()
{
    activatedOkButton();
}
void DialogPermis::on_comboBoxPermis_currentTextChanged(const QString &arg1)
{
    activatedOkButton();
}
