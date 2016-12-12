#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T09:41:05
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gestion_demenagement
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogajoutdossiercommercial.cpp \
    vehicule.cpp \
    salarie.cpp \
    agence.cpp \
    arretmaladie.cpp \
    commercial.cpp \
    conge.cpp \
    demenageur.cpp \
    dossierdemenagement.cpp \
    garage.cpp \
    immobilisation.cpp \
    permis.cpp \
    obtention.cpp \
    motifconge.cpp \
    dialogagence.cpp \
    dialogverification.cpp \
    dialogsalarie.cpp \
    dialogchefagence.cpp \
    dialogchefentreprise.cpp \
    dialogcommercial.cpp

HEADERS  += mainwindow.h \
    dialogajoutdossiercommercial.h \
    salarie.h \
    agence.h \
    arretmaladie.h \
    commercial.h \
    conge.h \
    demenageur.h \
    dossierdemenagement.h \
    garage.h \
    immobilisation.h \
    motifconge.h \
    obtention.h \
    permis.h \
    vehicule.h \
    dialogagence.h \
    dialogverification.h \
    dialogsalarie.h \
    dialogchefagence.h \
    dialogchefentreprise.h \
    dialogcommercial.h

FORMS  += mainwindow.ui \
    dialogajoutdossiercommercial.ui \
    dialogagence.ui \
    dialogverification.ui \
    dialogsalarie.ui \
    dialogchefagence.ui \
    dialogchefentreprise.ui \
    dialogcommercial.ui

RESOURCES += \
    ma_ressource.qrc
