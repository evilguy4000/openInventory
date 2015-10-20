#-------------------------------------------------
#
# Project created by QtCreator 2015-10-18T21:27:35
#
#-------------------------------------------------

QT       += core gui
QT       += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = openInventory
TEMPLATE = app


SOURCES += main.cpp\
    oi_mysqlhandler.cpp \
    oi_loginwindow.cpp

HEADERS  += \
    oi_mysqlhandler.h \
    main.h \
    oi_loginwindow.h

FORMS    += \
    oi_loginwindow.ui

RESOURCES += \
    imageres.qrc

