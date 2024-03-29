######################################################################
# Automatically generated by qmake (3.1) Sat Apr 17 16:07:21 2021
######################################################################

TEMPLATE = app
TARGET = v2
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += inc/mainwindow_ui.h \
           inc/MyArhive.h \
           inc/MyCoordinateGrid.h \
           inc/MyFish.h \
           inc/MyGraphicsView.h \
           inc/MyMainWindow.h \
           inc/MyMatrixWork.h \
           inc/MyViewPort.h
SOURCES += src/main.cpp \
           src/MyArhive.cpp \
           src/MyCoordinateGrid.cpp \
           src/MyFish.cpp \
           src/MyGraphicsView.cpp \
           src/MyMainWindow.cpp \
           src/MyMatrixWork.cpp \
           src/MyViewPort.cpp
           

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
