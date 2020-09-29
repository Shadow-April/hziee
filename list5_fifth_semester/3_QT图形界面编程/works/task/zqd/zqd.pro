#-------------------------------------------------
#
# Project created by QtCreator 2020-09-29T10:05:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zqd
TEMPLATE = app


SOURCES += main.cpp\
        zqd_dm.cpp \
    point.cpp

HEADERS  += zqd_dm.h \
    point.h

FORMS    += zqd_dm.ui
RC_ICONS = moot.ico
