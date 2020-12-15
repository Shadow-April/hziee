#-------------------------------------------------
#
# Project created by QtCreator 2020-11-10T11:02:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZQD
TEMPLATE = app


SOURCES += main.cpp\
        zqd.cpp

HEADERS  += zqd.h

FORMS    += zqd.ui

RC_ICONS = moot.ico

RESOURCES += \
    myimages.qrc \
    top_trans.qrc

TRANSLATIONS = english.ts chinese.ts
