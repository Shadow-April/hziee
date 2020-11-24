#-------------------------------------------------
#
# Project created by QtCreator 2020-09-29T10:06:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = helloworld
TEMPLATE = app


SOURCES += main.cpp\
        hellodialog.cpp \
    point.cpp

HEADERS  += hellodialog.h \
    point.h

FORMS    += hellodialog.ui

RC_ICONS = myico.ico
