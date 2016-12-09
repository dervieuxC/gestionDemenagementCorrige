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
    dialogagence.cpp \
    vehicule.cpp \
    salarie.cpp \
    permis.cpp \
    obtention.cpp \
    motifconge.cpp \
    immobilisation.cpp \
    garage.cpp \
    dossierdemenagement.cpp \
    demenageur.cpp \
    conge.cpp \
    commercial.cpp \
    arretmaladie.cpp \
    agence.cpp

HEADERS  += mainwindow.h \
    mainwindowcommercial.h \
    mainwindowsalarie.h \
    dialogajoutdossiercommercial.h \
    mainwindowchef.h \
    dialogagence.h \
    vehicule.h \
    salarie.h \
    permis.h \
    obtention.h \
    motifconge.h \
    immobilisation.h \
    garage.h \
    dossierdemenagement.h \
    demenageur.h \
    conge.h \
    commercial.h \
    arretmaladie.h \
    agence.h

FORMS    += mainwindow.ui \
    mainwindowcommercial.ui \
    mainwindowsalarie.ui \
    dialogajoutdossiercommercial.ui \
    mainwindowchef.ui \
    dialogagence.ui

RESOURCES += \
    ma_ressource.qrc

OTHER_FILES += \
    README.md \
    Gestion_Demenagement.odt \
    gestion_demenagement.pro.user.1ae72ce \
    gestion_demenagement.pro.user \
    images/list-remove.png \
    images/list-add.png \
    images/dialog-ok-apply.png \
    images/demenagement-toulouse.jpg
