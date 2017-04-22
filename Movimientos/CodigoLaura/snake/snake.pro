#-------------------------------------------------
#
# Project created by QtCreator 2011-11-04T21:51:54
#
#-------------------------------------------------

QT       += core gui

TARGET = snake
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    about.h

FORMS    += mainwindow.ui \
    about.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../lib/release/ -ldxl
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../lib/debug/ -ldxl
else:symbian: LIBS += -ldxl
else:unix: LIBS += -L$$PWD/../lib/ -ldxl

INCLUDEPATH += $$PWD/../include
DEPENDPATH += $$PWD/../include

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../lib/release/dxl.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../lib/debug/dxl.lib
else:unix:!symbian: PRE_TARGETDEPS += $$PWD/../lib/libdxl.a
