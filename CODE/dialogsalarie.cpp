#include "dialogsalarie.h"
#include "ui_dialogsalarie.h"

DialogSalarie::DialogSalarie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSalarie)
{
    ui->setupUi(this);
}

DialogSalarie::~DialogSalarie()
{
    delete ui;
}

void DialogSalarie::on_pushButtonPasserPermis_clicked()
{
    DialogPermis dialPermis;
    dialPermis.show();
}
