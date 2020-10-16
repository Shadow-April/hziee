#-------------------------------------------------
#
# Project created by QtCreator 2020-10-13T11:56:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zqd
TEMPLATE = app


SOURCES += main.cpp\
        zqd.cpp \
    logindialog.cpp

HEADERS  += zqd.h \
    logindialog.h

FORMS    += zqd.ui \
    logindialog.ui

RESOURCES += \
    myimages.qrc
RC_ICONS = moot.ico
