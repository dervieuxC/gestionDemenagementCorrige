#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase dbContact=QSqlDatabase::addDatabase("QMYSQL");
    dbContact.setDatabaseName("dbGestionDemenegament");
    dbContact.setUserName("adminDbGestionDemenegament");
    dbContact.setPassword("123456789");
    //if(dbContact.open())
    //{
        MainWindow w;
        w.show();
        return a.exec();
    //}
    //else
    //{
    //    qDebug() << "erreur de connexion à la base de donnée" << endl;
    //    return -125;
    //}
}
