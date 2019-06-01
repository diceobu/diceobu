#-------------------------------------------------
#
# Project created by QtCreator 2019-05-25T18:51:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DiceobuUI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        Campaign.cpp \
        Character.cpp \
        DungeonMaster.cpp \
        Entity.cpp \
        Equipment.cpp \
        Item.cpp \
        Map.cpp \
        NPC.cpp \
        NonMagicalPower.cpp \
        NonUsable.cpp \
        Object.cpp \
        Obstacle.cpp \
        PC.cpp \
        Player.cpp \
        Power.cpp \
        Spell.cpp \
        Tile.cpp \
        Usable.cpp \
        User.cpp \
        Weapon.cpp \
        characterdetailswindow.cpp \
        charactersaves.cpp \
        charcreatewindow.cpp \
        lobbywindow.cpp \
        main.cpp \
        loginwindow.cpp \
        mainDependancies.cpp \
        mainuiclass.cpp \
        mapcreatewindow.cpp \
        mapwidget.cpp \
        movewindow.cpp

HEADERS += \
        Campaign.h \
        Character.h \
        DiceobuLibrary.h \
        DungeonMaster.h \
        Entity.h \
        Equipment.h \
        GameData.h \
        GlobalVariables.h \
        Item.h \
        Map.h \
        NPC.h \
        NonMagicalPower.h \
        NonUsable.h \
        Object.h \
        Obstacle.h \
        PC.h \
        Player.h \
        Power.h \
        Spell.h \
        Tile.h \
        Usable.h \
        User.h \
        Weapon.h \
        characterdetailswindow.h \
        charactersaves.h \
        charcreatewindow.h \
        lobbywindow.h \
        loginwindow.h \
        mainDependancies.h \
        mainuiclass.h \
        mapcreatewindow.h \
        mapwidget.h \
        movewindow.h

FORMS += \
        characterdetailswindow.ui \
        charcreatewindow.ui \
        lobbywindow.ui \
        loginwindow.ui \
        mapcreatewindow.ui \
        mapwidget.ui \
        movewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc \
    resources.qrc

DISTFILES += \
    DiceobuUI.pro.user \
    Sample.dat
//QMAKE_CXXFLAGS += -std=c++11
