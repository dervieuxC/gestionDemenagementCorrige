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
    mainwindowsalarie.cpp \
    mainwindowcommercial.cpp \
    dialogajoutdossiercommercial.cpp \
    mainwindowchef.cpp \
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
    mainwindowchefentreprise.cpp \
    permis.cpp \
    obtention.cpp \
    motifconge.cpp

HEADERS  += mainwindow.h \
    mainwindowcommercial.h \
    mainwindowsalarie.h \
    dialogajoutdossiercommercial.h \
    mainwindowchef.h \
    salarie.h \
    agence.h \
    arretmaladie.h \
    commercial.h \
    conge.h \
    demenageur.h \
    dossierdemenagement.h \
    garage.h \
    immobilisation.h \
    mainwindowchefentreprise.h \
    motifconge.h \
    obtention.h \
    permis.h \
    vehicule.h

FORMS  += mainwindow.ui \
    mainwindowcommercial.ui \
    mainwindowsalarie.ui \
    dialogajoutdossiercommercial.ui \
    mainwindowchef.ui \
    mainwindowchefentreprise.ui

RESOURCES += \
    ma_ressource.qrc
