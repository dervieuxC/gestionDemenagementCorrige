#include "dialogverification.h"
#include "ui_dialogverification.h"

DialogVerification::DialogVerification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogVerification)
{
    ui->setupUi(this);
}

DialogVerification::~DialogVerification()
{
    delete ui;
}
