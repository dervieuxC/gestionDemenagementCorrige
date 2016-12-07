#include "mainwindowchef.h"
#include "ui_mainwindowchef.h"

MainWindowChef::MainWindowChef(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowChef)
{
    ui->setupUi(this);
}

MainWindowChef::~MainWindowChef()
{
    delete ui;
}
