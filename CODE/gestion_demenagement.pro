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
    dialogsalarie.cpp \
<<<<<<< HEAD
    dialogverification.cpp \
    dialogajouteremploye.cpp \
    dialogajoutarretmaladie.cpp
=======
    dialoggererdemenagement.cpp \
    dialogchefagence.cpp \
    dialogajouteremploye.cpp \
    dialogchefentreprise.cpp \
    dialogcommercial.cpp \
    dialogdemandeabsence.cpp \
    dialogverification.cpp
>>>>>>> ab116adad5ebde2583c631b59f39636352fef60e

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
    dialogsalarie.h \
<<<<<<< HEAD
    dialogverification.h \
    dialogajouteremploye.h \
    dialogajoutarretmaladie.h
=======
    dialoggererdemenagement.h \
    dialogverification.h \
    dialogchefagence.h \
    dialogsalarie.h \
    dialogajouteremploye.h \
    dialogchefentreprise.h \
    dialogcommercial.h \
    dialogdemandeabsence.h


>>>>>>> ab116adad5ebde2583c631b59f39636352fef60e

FORMS  += mainwindow.ui \
    dialogajoutdossiercommercial.ui \
    dialogagence.ui \
    dialogsalarie.ui \
<<<<<<< HEAD
    dialogverification.ui \
    dialogajouteremploye.ui \
    dialogajoutarretmaladie.ui
=======
    dialoggererdemenagement.ui \
    dialogverification.ui \
    dialogsalarie.ui \
    dialogchefagence.ui \
    dialogchefentreprise.ui \
    dialogcommercial.ui \
    dialogajouteremploye.ui \
    dialogdemandeabsence.ui
>>>>>>> ab116adad5ebde2583c631b59f39636352fef60e

RESOURCES += \
    ma_ressource.qrc
