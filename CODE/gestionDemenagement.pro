#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T09:19:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gestionDemenagement
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    salarie.cpp \
    commercial.cpp \
    demenageur.cpp \
    agence.cpp \
    dossierdemenagement.cpp \
    vehicule.cpp \
    conge.cpp \
    motifconge.cpp \
    permis.cpp \
    garage.cpp \
    immobilisation.cpp \
    obtention.cpp \
    arretmaladie.cpp

HEADERS  += mainwindow.h \
    salarie.h \
    commercial.h \
    demenageur.h \
    agence.h \
    dossierdemenagement.h \
    vehicule.h \
    conge.h \
    motifconge.h \
    permis.h \
    garage.h \
    immobilisation.h \
    obtention.h \
    arretmaladie.h

FORMS    += mainwindow.ui
