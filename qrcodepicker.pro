#-------------------------------------------------
#
# Project created by QtCreator 2016-07-05T17:44:54
#
#-------------------------------------------------

QT       -= gui

TARGET = qrcodepicker
TEMPLATE = lib

DEFINES += QRCODEPICKER_LIBRARY

SOURCES += qrcodepicker.cpp

HEADERS += qrcodepicker.h\
        qrcodepicker_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
