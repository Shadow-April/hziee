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
    logindialog.cpp \
    user_info.cpp \
    point.cpp

HEADERS  += zqd.h \
    logindialog.h \
    user_info.h \
    point.h

FORMS    += zqd.ui \
    logindialog.ui \
    user_info.ui

CONFIG += C++11

RESOURCES += \
    myimages.qrc
RC_ICONS = moot.ico
