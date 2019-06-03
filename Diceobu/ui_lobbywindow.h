/********************************************************************************
** Form generated from reading UI file 'lobbywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOBBYWINDOW_H
#define UI_LOBBYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_LobbyWindow
{
public:
    QAction *actionOptions;
    QAction *actionNewCharacter;
    QAction *actionDeleteCharacter;
    QAction *actionDeleteMap;
    QAction *actionNewMap;
    QAction *actionLoadCharacter;
    QAction *actionSaveCharacter;
    QAction *actionAbout;
    QAction *actionAbout_the_Interface;
    QWidget *centralwidget;
    QTableWidget *tableWidget_2;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButton_Move;
    MapWidget *tableWidget;
    QPushButton *pushButton_Grid;
    QPushButton *pushButton_Engage_Combat;
    QGroupBox *groupBox_Powers;
    QListWidget *listWidget_Powers_Lobby;
    QPushButton *pushButton_Combat_Status;
    QGroupBox *groupBox_NextUp;
    QLabel *label_Next_Up;
    QPushButton *pushButton_Character_Details;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_currMap;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_nextMap;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_currChar;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_nextCharacter;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBox_Maps;
    QComboBox *comboBox_Characters;
    QPushButton *pushButton_Skip_Turn;
    QTabWidget *tabWidget;
    QWidget *tab_system_log;
    QTextBrowser *system_log;
    QWidget *tab_combat_log;
    QTextBrowser *combat_log;
    QPushButton *pushButton_System_Log;
    QPushButton *pushButton_Combat_Log;
    QPushButton *pushButton_5;
    QPushButton *pushButton_Entity_Positions;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QMenu *menuNew;
    QMenu *menuClose;
    QMenu *menuDelete;
    QMenu *menuLoad;
    QMenu *menuSave;
    QMenu *menuHelp;

    void setupUi(QMainWindow *LobbyWindow)
    {
        if (LobbyWindow->objectName().isEmpty())
            LobbyWindow->setObjectName(QString::fromUtf8("LobbyWindow"));
        LobbyWindow->resize(1440, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/d20v2.png"), QSize(), QIcon::Normal, QIcon::Off);
        LobbyWindow->setWindowIcon(icon);
        LobbyWindow->setStyleSheet(QString::fromUtf8(""));
        actionOptions = new QAction(LobbyWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/fonts/img/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon1);
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setBold(true);
        font.setWeight(75);
        actionOptions->setFont(font);
        actionNewCharacter = new QAction(LobbyWindow);
        actionNewCharacter->setObjectName(QString::fromUtf8("actionNewCharacter"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        actionNewCharacter->setFont(font1);
        actionDeleteCharacter = new QAction(LobbyWindow);
        actionDeleteCharacter->setObjectName(QString::fromUtf8("actionDeleteCharacter"));
        actionDeleteMap = new QAction(LobbyWindow);
        actionDeleteMap->setObjectName(QString::fromUtf8("actionDeleteMap"));
        actionNewMap = new QAction(LobbyWindow);
        actionNewMap->setObjectName(QString::fromUtf8("actionNewMap"));
        actionNewMap->setFont(font1);
        actionLoadCharacter = new QAction(LobbyWindow);
        actionLoadCharacter->setObjectName(QString::fromUtf8("actionLoadCharacter"));
        actionSaveCharacter = new QAction(LobbyWindow);
        actionSaveCharacter->setObjectName(QString::fromUtf8("actionSaveCharacter"));
        actionAbout = new QAction(LobbyWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        actionAbout->setFont(font2);
        actionAbout_the_Interface = new QAction(LobbyWindow);
        actionAbout_the_Interface->setObjectName(QString::fromUtf8("actionAbout_the_Interface"));
        actionAbout_the_Interface->setFont(font2);
        centralwidget = new QWidget(LobbyWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget_2 = new QTableWidget(centralwidget);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(20, 70, 770, 770));
        tableWidget_2->setFocusPolicy(Qt::NoFocus);
        tableWidget_2->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"font: 75 30pt \"ImperatorSmallCaps\";\n"
"background-color: gray;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 5px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(25, 10, 761, 60));
        label->setFocusPolicy(Qt::NoFocus);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 30pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1160, 10, 261, 361));
        groupBox->setFocusPolicy(Qt::NoFocus);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgba(128,128, 128), stop:1 rgba(64,64, 64));\n"
"font: 75 24pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 261, 60));
        label_2->setFocusPolicy(Qt::NoFocus);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 30pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_Move = new QPushButton(centralwidget);
        pushButton_Move->setObjectName(QString::fromUtf8("pushButton_Move"));
        pushButton_Move->setGeometry(QRect(920, 90, 121, 61));
        pushButton_Move->setFocusPolicy(Qt::NoFocus);
        pushButton_Move->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 grey);\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"}\n"
""));
        tableWidget = new MapWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 80, 751, 750));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 gray, stop:1 black);\n"
"font: 75 30pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        pushButton_Grid = new QPushButton(centralwidget);
        pushButton_Grid->setObjectName(QString::fromUtf8("pushButton_Grid"));
        pushButton_Grid->setGeometry(QRect(20, 840, 101, 31));
        pushButton_Grid->setFocusPolicy(Qt::NoFocus);
        pushButton_Grid->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
"\n"
"QPushButton:checked{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(170,170,170), stop:1 grey);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"}\n"
""));
        pushButton_Grid->setCheckable(true);
        pushButton_Engage_Combat = new QPushButton(centralwidget);
        pushButton_Engage_Combat->setObjectName(QString::fromUtf8("pushButton_Engage_Combat"));
        pushButton_Engage_Combat->setGeometry(QRect(660, 840, 131, 31));
        pushButton_Engage_Combat->setFocusPolicy(Qt::NoFocus);
        pushButton_Engage_Combat->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
"\n"
"QPushButton:checked{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(170,170,170), stop:1 grey);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"}\n"
""));
        pushButton_Engage_Combat->setCheckable(true);
        groupBox_Powers = new QGroupBox(centralwidget);
        groupBox_Powers->setObjectName(QString::fromUtf8("groupBox_Powers"));
        groupBox_Powers->setGeometry(QRect(870, 350, 241, 281));
        groupBox_Powers->setFocusPolicy(Qt::NoFocus);
        groupBox_Powers->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
" border: 2px solid black;\n"
" margin-top: 2ex;\n"
" border-radius: 5px;\n"
"color: white;\n"
"border-color: white;\n"
"}"));
        listWidget_Powers_Lobby = new QListWidget(groupBox_Powers);
        listWidget_Powers_Lobby->setObjectName(QString::fromUtf8("listWidget_Powers_Lobby"));
        listWidget_Powers_Lobby->setGeometry(QRect(10, 30, 221, 241));
        listWidget_Powers_Lobby->setFocusPolicy(Qt::NoFocus);
        listWidget_Powers_Lobby->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 11pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        pushButton_Combat_Status = new QPushButton(centralwidget);
        pushButton_Combat_Status->setObjectName(QString::fromUtf8("pushButton_Combat_Status"));
        pushButton_Combat_Status->setGeometry(QRect(890, 90, 180, 60));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Combat_Status->sizePolicy().hasHeightForWidth());
        pushButton_Combat_Status->setSizePolicy(sizePolicy);
        pushButton_Combat_Status->setMinimumSize(QSize(180, 60));
        pushButton_Combat_Status->setFocusPolicy(Qt::NoFocus);
        pushButton_Combat_Status->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 18pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 grey);\n"
"font: 75 22pt \"ImperatorSmallCaps\";\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"}\n"
""));
        groupBox_NextUp = new QGroupBox(centralwidget);
        groupBox_NextUp->setObjectName(QString::fromUtf8("groupBox_NextUp"));
        groupBox_NextUp->setGeometry(QRect(890, 170, 181, 91));
        groupBox_NextUp->setFocusPolicy(Qt::NoFocus);
        groupBox_NextUp->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
" border: 2px solid black;\n"
" margin-top: 2ex;\n"
" border-radius: 5px;\n"
"color: white;\n"
"border-color: white;\n"
"}"));
        label_Next_Up = new QLabel(groupBox_NextUp);
        label_Next_Up->setObjectName(QString::fromUtf8("label_Next_Up"));
        label_Next_Up->setGeometry(QRect(10, 29, 161, 51));
        label_Next_Up->setMinimumSize(QSize(0, 0));
        label_Next_Up->setMaximumSize(QSize(1500, 1500));
        QFont font3;
        font3.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(9);
        label_Next_Up->setFont(font3);
        label_Next_Up->setFocusPolicy(Qt::NoFocus);
        label_Next_Up->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
""));
        label_Next_Up->setAlignment(Qt::AlignCenter);
        label_Next_Up->setWordWrap(true);
        pushButton_Character_Details = new QPushButton(centralwidget);
        pushButton_Character_Details->setObjectName(QString::fromUtf8("pushButton_Character_Details"));
        pushButton_Character_Details->setGeometry(QRect(890, 10, 180, 60));
        sizePolicy.setHeightForWidth(pushButton_Character_Details->sizePolicy().hasHeightForWidth());
        pushButton_Character_Details->setSizePolicy(sizePolicy);
        pushButton_Character_Details->setMinimumSize(QSize(180, 60));
        pushButton_Character_Details->setFocusPolicy(Qt::NoFocus);
        pushButton_Character_Details->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 18pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 grey);\n"
"font: 75 22pt \"ImperatorSmallCaps\";\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"}\n"
""));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1150, 380, 277, 244));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(129, 60));
        label_4->setMaximumSize(QSize(130, 60));
        label_4->setFocusPolicy(Qt::NoFocus);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_currMap = new QLabel(layoutWidget);
        label_currMap->setObjectName(QString::fromUtf8("label_currMap"));
        label_currMap->setMinimumSize(QSize(129, 60));
        label_currMap->setMaximumSize(QSize(130, 60));
        label_currMap->setFont(font3);
        label_currMap->setFocusPolicy(Qt::NoFocus);
        label_currMap->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
""));
        label_currMap->setAlignment(Qt::AlignCenter);
        label_currMap->setWordWrap(true);

        verticalLayout->addWidget(label_currMap);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        pushButton_nextMap = new QPushButton(layoutWidget);
        pushButton_nextMap->setObjectName(QString::fromUtf8("pushButton_nextMap"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_nextMap->sizePolicy().hasHeightForWidth());
        pushButton_nextMap->setSizePolicy(sizePolicy1);
        pushButton_nextMap->setMinimumSize(QSize(99, 30));
        pushButton_nextMap->setMaximumSize(QSize(100, 30));
        pushButton_nextMap->setFocusPolicy(Qt::NoFocus);
        pushButton_nextMap->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(50,50,50);\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius:5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(24,24,24);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius:5px;\n"
"color: white;\n"
"}"));

        horizontalLayout->addWidget(pushButton_nextMap);

        horizontalSpacer_6 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(130, 60));
        label_5->setMaximumSize(QSize(130, 60));
        label_5->setFocusPolicy(Qt::NoFocus);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        label_currChar = new QLabel(layoutWidget);
        label_currChar->setObjectName(QString::fromUtf8("label_currChar"));
        label_currChar->setMinimumSize(QSize(130, 60));
        label_currChar->setMaximumSize(QSize(130, 60));
        label_currChar->setFont(font3);
        label_currChar->setFocusPolicy(Qt::NoFocus);
        label_currChar->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
""));
        label_currChar->setAlignment(Qt::AlignCenter);
        label_currChar->setWordWrap(true);

        verticalLayout_2->addWidget(label_currChar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        pushButton_nextCharacter = new QPushButton(layoutWidget);
        pushButton_nextCharacter->setObjectName(QString::fromUtf8("pushButton_nextCharacter"));
        pushButton_nextCharacter->setMinimumSize(QSize(100, 20));
        pushButton_nextCharacter->setMaximumSize(QSize(100, 30));
        pushButton_nextCharacter->setFocusPolicy(Qt::NoFocus);
        pushButton_nextCharacter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(50,50,50);\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius:5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(24,24,24);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius:5px;\n"
"color: white;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_nextCharacter);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        comboBox_Maps = new QComboBox(layoutWidget);
        comboBox_Maps->setObjectName(QString::fromUtf8("comboBox_Maps"));
        comboBox_Maps->setMinimumSize(QSize(271, 30));
        comboBox_Maps->setFocusPolicy(Qt::NoFocus);
        comboBox_Maps->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: rgb(88, 88, 88);\n"
"border-width: 1px;\n"
"border-radius: 2px;\n"
"color: rgb(220, 220, 220);\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_3->addWidget(comboBox_Maps);

        comboBox_Characters = new QComboBox(layoutWidget);
        comboBox_Characters->setObjectName(QString::fromUtf8("comboBox_Characters"));
        comboBox_Characters->setMinimumSize(QSize(271, 30));
        comboBox_Characters->setFocusPolicy(Qt::NoFocus);
        comboBox_Characters->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: rgb(88, 88, 88);\n"
"border-width: 1px;\n"
"border-radius: 2px;\n"
"color: rgb(220, 220, 220);\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_3->addWidget(comboBox_Characters);


        verticalLayout_5->addLayout(verticalLayout_3);

        pushButton_Skip_Turn = new QPushButton(centralwidget);
        pushButton_Skip_Turn->setObjectName(QString::fromUtf8("pushButton_Skip_Turn"));
        pushButton_Skip_Turn->setGeometry(QRect(900, 270, 161, 30));
        sizePolicy1.setHeightForWidth(pushButton_Skip_Turn->sizePolicy().hasHeightForWidth());
        pushButton_Skip_Turn->setSizePolicy(sizePolicy1);
        pushButton_Skip_Turn->setMinimumSize(QSize(161, 30));
        pushButton_Skip_Turn->setMaximumSize(QSize(161, 30));
        pushButton_Skip_Turn->setFocusPolicy(Qt::NoFocus);
        pushButton_Skip_Turn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(50,50,50);\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius:5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(24,24,24);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius:5px;\n"
"color: white;\n"
"}"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(810, 664, 620, 210));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 11pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"height: 0px;\n"
"}"));
        tab_system_log = new QWidget();
        tab_system_log->setObjectName(QString::fromUtf8("tab_system_log"));
        system_log = new QTextBrowser(tab_system_log);
        system_log->setObjectName(QString::fromUtf8("system_log"));
        system_log->setGeometry(QRect(0, 0, 620, 189));
        system_log->setFocusPolicy(Qt::NoFocus);
        system_log->setAcceptDrops(false);
        system_log->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 gray, stop:1 gray);\n"
"font: 75 11pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}"));
        tabWidget->addTab(tab_system_log, QString());
        tab_combat_log = new QWidget();
        tab_combat_log->setObjectName(QString::fromUtf8("tab_combat_log"));
        combat_log = new QTextBrowser(tab_combat_log);
        combat_log->setObjectName(QString::fromUtf8("combat_log"));
        combat_log->setGeometry(QRect(0, 0, 620, 189));
        combat_log->setFocusPolicy(Qt::NoFocus);
        combat_log->setAcceptDrops(false);
        combat_log->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 gray, stop:1 gray);\n"
"font: 75 11pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}"));
        tabWidget->addTab(tab_combat_log, QString());
        pushButton_System_Log = new QPushButton(centralwidget);
        pushButton_System_Log->setObjectName(QString::fromUtf8("pushButton_System_Log"));
        pushButton_System_Log->setGeometry(QRect(810, 656, 310, 30));
        sizePolicy.setHeightForWidth(pushButton_System_Log->sizePolicy().hasHeightForWidth());
        pushButton_System_Log->setSizePolicy(sizePolicy);
        pushButton_System_Log->setMinimumSize(QSize(310, 30));
        pushButton_System_Log->setFocusPolicy(Qt::NoFocus);
        pushButton_System_Log->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 16pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(170,170,170), stop:1 grey);\n"
"font: 75 16pt \"ImperatorSmallCaps\";\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"}\n"
""));
        pushButton_System_Log->setCheckable(true);
        pushButton_Combat_Log = new QPushButton(centralwidget);
        pushButton_Combat_Log->setObjectName(QString::fromUtf8("pushButton_Combat_Log"));
        pushButton_Combat_Log->setGeometry(QRect(1120, 656, 310, 30));
        sizePolicy.setHeightForWidth(pushButton_Combat_Log->sizePolicy().hasHeightForWidth());
        pushButton_Combat_Log->setSizePolicy(sizePolicy);
        pushButton_Combat_Log->setMinimumSize(QSize(310, 30));
        pushButton_Combat_Log->setFocusPolicy(Qt::NoFocus);
        pushButton_Combat_Log->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 16pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(170,170,170), stop:1 grey);\n"
"font: 75 16pt \"ImperatorSmallCaps\";\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"}\n"
""));
        pushButton_Combat_Log->setCheckable(true);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(790, 150, 101, 61));
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 11pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        pushButton_Entity_Positions = new QPushButton(centralwidget);
        pushButton_Entity_Positions->setObjectName(QString::fromUtf8("pushButton_Entity_Positions"));
        pushButton_Entity_Positions->setGeometry(QRect(131, 840, 131, 31));
        pushButton_Entity_Positions->setFocusPolicy(Qt::NoFocus);
        pushButton_Entity_Positions->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        LobbyWindow->setCentralWidget(centralwidget);
        pushButton_Combat_Status->raise();
        pushButton_Character_Details->raise();
        label->raise();
        groupBox->raise();
        pushButton_Move->raise();
        tableWidget_2->raise();
        tableWidget->raise();
        layoutWidget->raise();
        pushButton_Grid->raise();
        pushButton_Engage_Combat->raise();
        groupBox_Powers->raise();
        groupBox_NextUp->raise();
        pushButton_Skip_Turn->raise();
        tabWidget->raise();
        pushButton_System_Log->raise();
        pushButton_Combat_Log->raise();
        pushButton_5->raise();
        pushButton_Entity_Positions->raise();
        menubar = new QMenuBar(LobbyWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1440, 22));
        QFont font4;
        font4.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(9);
        menubar->setFont(font4);
        menubar->setAutoFillBackground(false);
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 11pt \"ImperatorSmallCaps\";\n"
"}"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        menuFile->setFont(font5);
        menuFile->setStyleSheet(QString::fromUtf8("QMenu{\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"\n"
"}\n"
"QAction{\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"\n"
"}"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        menuNew->setFont(font4);
        menuNew->setStyleSheet(QString::fromUtf8("QMenu{\n"
"font: 75 11pt \"ImperatorSmallCaps\";\n"
"}\n"
"\n"
"QAction{\n"
"font: 75 11pt \"ImperatorSmallCaps\";\n"
"}"));
        menuClose = new QMenu(menuFile);
        menuClose->setObjectName(QString::fromUtf8("menuClose"));
        menuDelete = new QMenu(menuFile);
        menuDelete->setObjectName(QString::fromUtf8("menuDelete"));
        menuLoad = new QMenu(menuFile);
        menuLoad->setObjectName(QString::fromUtf8("menuLoad"));
        menuSave = new QMenu(menuFile);
        menuSave->setObjectName(QString::fromUtf8("menuSave"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setWeight(75);
        menuHelp->setFont(font6);
        LobbyWindow->setMenuBar(menubar);
        QWidget::setTabOrder(tableWidget, pushButton_Move);
        QWidget::setTabOrder(pushButton_Move, pushButton_5);
        QWidget::setTabOrder(pushButton_5, tableWidget_2);
        QWidget::setTabOrder(tableWidget_2, pushButton_nextMap);
        QWidget::setTabOrder(pushButton_nextMap, pushButton_nextCharacter);
        QWidget::setTabOrder(pushButton_nextCharacter, comboBox_Maps);
        QWidget::setTabOrder(comboBox_Maps, comboBox_Characters);
        QWidget::setTabOrder(comboBox_Characters, pushButton_Grid);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(menuSave->menuAction());
        menuFile->addAction(menuLoad->menuAction());
        menuFile->addAction(menuDelete->menuAction());
        menuFile->addAction(menuClose->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionOptions);
        menuNew->addAction(actionNewMap);
        menuNew->addAction(actionNewCharacter);
        menuDelete->addAction(actionDeleteMap);
        menuDelete->addAction(actionDeleteCharacter);
        menuLoad->addAction(actionLoadCharacter);
        menuSave->addAction(actionSaveCharacter);
        menuHelp->addAction(actionAbout);

        retranslateUi(LobbyWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LobbyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LobbyWindow)
    {
        LobbyWindow->setWindowTitle(QApplication::translate("LobbyWindow", "Diceobu", nullptr));
        actionOptions->setText(QApplication::translate("LobbyWindow", "Options", nullptr));
        actionNewCharacter->setText(QApplication::translate("LobbyWindow", "Character", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNewCharacter->setToolTip(QApplication::translate("LobbyWindow", "newCharacter", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNewCharacter->setShortcut(QApplication::translate("LobbyWindow", "C", nullptr));
#endif // QT_NO_SHORTCUT
        actionDeleteCharacter->setText(QApplication::translate("LobbyWindow", "Character", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDeleteCharacter->setToolTip(QApplication::translate("LobbyWindow", "deleteCharacter", nullptr));
#endif // QT_NO_TOOLTIP
        actionDeleteMap->setText(QApplication::translate("LobbyWindow", "Map", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDeleteMap->setToolTip(QApplication::translate("LobbyWindow", "deleteMap", nullptr));
#endif // QT_NO_TOOLTIP
        actionNewMap->setText(QApplication::translate("LobbyWindow", "Map", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNewMap->setToolTip(QApplication::translate("LobbyWindow", "newMap", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNewMap->setShortcut(QApplication::translate("LobbyWindow", "M", nullptr));
#endif // QT_NO_SHORTCUT
        actionLoadCharacter->setText(QApplication::translate("LobbyWindow", "Character", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLoadCharacter->setToolTip(QApplication::translate("LobbyWindow", "loadCharacter", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionLoadCharacter->setShortcut(QApplication::translate("LobbyWindow", "L", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveCharacter->setText(QApplication::translate("LobbyWindow", "Character", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveCharacter->setToolTip(QApplication::translate("LobbyWindow", "saveCharacter", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSaveCharacter->setShortcut(QApplication::translate("LobbyWindow", "J", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("LobbyWindow", "Game Info", nullptr));
        actionAbout_the_Interface->setText(QApplication::translate("LobbyWindow", "About the Interface", nullptr));
        label->setText(QApplication::translate("LobbyWindow", "Game Map", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("LobbyWindow", "Friends", nullptr));
        pushButton_Move->setText(QApplication::translate("LobbyWindow", "Move\n"
"Character", nullptr));
        pushButton_Grid->setText(QApplication::translate("LobbyWindow", "Grid", nullptr));
        pushButton_Engage_Combat->setText(QApplication::translate("LobbyWindow", "Engage Combat", nullptr));
        groupBox_Powers->setTitle(QApplication::translate("LobbyWindow", "Powers", nullptr));
        pushButton_Combat_Status->setText(QApplication::translate("LobbyWindow", "Combat\n"
"Status", nullptr));
        groupBox_NextUp->setTitle(QApplication::translate("LobbyWindow", "Next up", nullptr));
        label_Next_Up->setText(QString());
        pushButton_Character_Details->setText(QApplication::translate("LobbyWindow", "Character\n"
"Details", nullptr));
        label_4->setText(QApplication::translate("LobbyWindow", "Current \n"
" Map", nullptr));
        label_currMap->setText(QString());
        pushButton_nextMap->setText(QApplication::translate("LobbyWindow", ">>", nullptr));
        label_5->setText(QApplication::translate("LobbyWindow", "Current \n"
" Character", nullptr));
        label_currChar->setText(QString());
        pushButton_nextCharacter->setText(QApplication::translate("LobbyWindow", ">>", nullptr));
        pushButton_Skip_Turn->setText(QApplication::translate("LobbyWindow", "Skip Turn >>", nullptr));
        system_log->setHtml(QApplication::translate("LobbyWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'ImperatorSmallCaps'; font-size:11pt; font-weight:72; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_system_log), QApplication::translate("LobbyWindow", "Tab 1", nullptr));
        combat_log->setHtml(QApplication::translate("LobbyWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'ImperatorSmallCaps'; font-size:11pt; font-weight:72; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_combat_log), QApplication::translate("LobbyWindow", "Tab 2", nullptr));
        pushButton_System_Log->setText(QApplication::translate("LobbyWindow", "System Log", nullptr));
        pushButton_Combat_Log->setText(QApplication::translate("LobbyWindow", "Combat Log", nullptr));
        pushButton_5->setText(QApplication::translate("LobbyWindow", "Not paint", nullptr));
        pushButton_Entity_Positions->setText(QApplication::translate("LobbyWindow", "Entity Positions", nullptr));
        menuFile->setTitle(QApplication::translate("LobbyWindow", "File", nullptr));
        menuOpen->setTitle(QApplication::translate("LobbyWindow", "Open...", nullptr));
        menuNew->setTitle(QApplication::translate("LobbyWindow", "New...", nullptr));
        menuClose->setTitle(QApplication::translate("LobbyWindow", "Close", nullptr));
        menuDelete->setTitle(QApplication::translate("LobbyWindow", "Delete...", nullptr));
        menuLoad->setTitle(QApplication::translate("LobbyWindow", "Load", nullptr));
        menuSave->setTitle(QApplication::translate("LobbyWindow", "Save", nullptr));
        menuHelp->setTitle(QApplication::translate("LobbyWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LobbyWindow: public Ui_LobbyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOBBYWINDOW_H
