#-------------------------------------------------
#
# Project created by QtCreator 2012-10-06T00:28:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QMAKE_CXXFLAGS += -std=c++0x

TARGET = TabBarDemonstrator
TEMPLATE = app

SOURCES += main.cpp demowindow.cpp fancytabbar.cpp fancytab.cpp stylehelper.cpp

HEADERS  += demowindow.h fancytabbar.h stylehelper.h fancytab.h
