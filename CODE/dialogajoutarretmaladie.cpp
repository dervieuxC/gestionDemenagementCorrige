#include "dialogajoutarretmaladie.h"
#include "ui_dialogajoutarretmaladie.h"

DialogAjoutArretMaladie::DialogAjoutArretMaladie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAjoutArretMaladie)
{
    ui->setupUi(this);
}

DialogAjoutArretMaladie::~DialogAjoutArretMaladie()
{
    delete ui;
}
