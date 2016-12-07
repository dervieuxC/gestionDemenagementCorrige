#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T09:41:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gestion_demenagement
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainwindowsalarie.cpp \
    mainwindowcommercial.cpp \
    dialogajoutdossiercommercial.cpp \
    mainwindowchef.cpp \
    agence.cpp \
    arretmaladie.cpp \
    commercial.cpp \
    conge.cpp \
    demenageur.cpp \
    dossierdemenagement.cpp \
    garage.cpp \
    immobilisation.cpp \
    motifconge.cpp \
    obtention.cpp \
    permis.cpp \
    salarie.cpp \
    vehicule.cpp

HEADERS  += mainwindow.h \
    mainwindowcommercial.h \
    mainwindowsalarie.h \
    dialogajoutdossiercommercial.h \
    mainwindowchef.h \
    agence.h \
    arretmaladie.h \
    commercial.h \
    conge.h \
    demenageur.cpp.autosave \
    demenageur.h \
    demenageur.h.autosave \
    dossierdemenagement.h \
    garage.h \
    immobilisation.h \
    motifconge.h \
    obtention.h \
    permis.h \
    salarie.h \
    vehicule.cpp.autosave \
    vehicule.h

FORMS    += mainwindow.ui \
    mainwindowcommercial.ui \
    mainwindowsalarie.ui \
    dialogajoutdossiercommercial.ui \
    mainwindowchef.ui

RESOURCES += \
    ma_ressource.qrc

OTHER_FILES += \
    testKappler \
    Gestion_Demenagement.odt \
    dialogajoutdossiercommercial.ui.autosave \
    gestion_demenagement.pro.user \
    gestion_demenagement.pro.user.1ae72ce \
    gestionDemenagement.pro.user \
    README.md

SUBDIRS += \
    gestionDemenagement.pro
