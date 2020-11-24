#-------------------------------------------------
#
# Project created by QtCreator 2020-11-23T20:46:46
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZQD
TEMPLATE = app


SOURCES += main.cpp\
        zqd.cpp

HEADERS  += zqd.h \
    connection.h

FORMS    += zqd.ui

RC_ICONS = moot.ico
