
greaterThan(QT_MAJOR_VERSION, 4) : QT += widgets
CONFIG += c++11

TARGET = prueba
CONFIG += console
CONFIG += app_bundle

target.files = prueba
target.path = /

DEFINES += QT_DEPRECATED_WARNINGS

INCLUDEPATH += /usr/local/include

INSTALLS += target
SOURCES += main.cpp \
    QVentana.cpp \
    CButton.cpp \
    CLabel.cpp

HEADERS += \
    QVentana.h \
    CButton.h \
    CLabel.h


