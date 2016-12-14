#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase dbContact=QSqlDatabase::addDatabase("QMYSQL");
    //grant all privileges on dbGestionDemenagement.* to admDemenagement@'%' identified by 'demgui01';
    dbContact.setHostName("172.29.56.5");
    dbContact.setDatabaseName("dbGestionDemenagement");
    dbContact.setUserName("admDemenagement");
    dbContact.setPassword("demgui01");
    if(dbContact.open())
    {
        MainWindow w;
        w.show();

        return a.exec();
    }
    else
    {
        qDebug() << "erreur de connexion à la base de donnée" << endl;
        return -125;
    }
}
