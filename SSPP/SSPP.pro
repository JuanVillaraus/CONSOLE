#-------------------------------------------------
#
# Project created by QtCreator 2015-06-10T09:06:00
# This software its developer for the Project SIVISO
#
#-------------------------------------------------

QT       += core gui sql
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SSPP
TEMPLATE = app

BASEDIR = $$IN_PWD
TARGETDIR = $$OUT_PWD
BUILDDIR= $$TARGETDIR/build
LANGUAGE=C++
OBJECTS_DIR = $$BUILDDIR/obj
MOC_DIR= $$BUILDDIR/moc
UI_HEADERS_DIR = src/ui/generated


SOURCES += main.cpp\
        siviso.cpp \
    blanco.cpp \
    ppi.cpp \
    signal.cpp \
    dbasepostgresql.cpp \
    wconfig.cpp \
    FrmPortable.cpp

HEADERS  += siviso.h \
    blanco.h \
    ppi.h \
    signal.h \
    dbasepostgresql.h \
    wconfig.h \
    FrmPortable.h

FORMS    += siviso.ui \
    wconfig.ui \
    FrmPortable.ui

RESOURCES += \
    resource.qrc
