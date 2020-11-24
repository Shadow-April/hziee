#-------------------------------------------------
#
# Project created by QtCreator 2020-11-24T09:25:50
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = top-manager
TEMPLATE = app


SOURCES += main.cpp\
        zqd.cpp \
    logindialog.cpp

HEADERS  += zqd.h \
    logindialog.h \
    connection.h

FORMS    += zqd.ui \
    logindialog.ui
