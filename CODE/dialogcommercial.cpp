#include "dialogcommercial.h"
#include "ui_dialogcommercial.h"

DialogCommercial::DialogCommercial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCommercial)
{
    ui->setupUi(this);
}

DialogCommercial::~DialogCommercial()
{
    delete ui;
}
