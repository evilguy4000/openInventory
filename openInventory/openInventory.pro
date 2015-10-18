#-------------------------------------------------
#
# Project created by QtCreator 2015-10-18T21:27:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = openInventory
TEMPLATE = app


SOURCES += main.cpp\
        oi_inventorywindow.cpp \
    oi_mysqlhandler.cpp

HEADERS  += oi_inventorywindow.h \
    oi_mysqlhandler.h

FORMS    += oi_inventorywindow.ui
