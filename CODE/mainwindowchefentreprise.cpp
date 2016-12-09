#include "mainwindowchefentreprise.h"
#include "ui_mainwindowchefentreprise.h"

MainWindowChefEntreprise::MainWindowChefEntreprise(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowChefEntreprise)
{
    ui->setupUi(this);
}

MainWindowChefEntreprise::~MainWindowChefEntreprise()
{
    delete ui;
}
