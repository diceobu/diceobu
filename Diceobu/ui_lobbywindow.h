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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_LobbyWindow
{
public:
    QAction *actionSave;
    QAction *actionOptions;
    QAction *actionNewCharacter;
    QAction *actionDeleteCharacter;
    QAction *actionDeleteMap;
    QAction *actionNewMap;
    QWidget *centralwidget;
    QTableWidget *tableWidget_2;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButton_Move;
    MapWidget *tableWidget;
    QPushButton *pushButton_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QTextBrowser *system_log;
    QWidget *layoutWidget2;
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
    QComboBox *comboBox_Maps;
    QComboBox *comboBox_2;
    QPushButton *pushButton_Grid;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QMenu *menuNew;
    QMenu *menuClose;
    QMenu *menuDelete;

    void setupUi(QMainWindow *LobbyWindow)
    {
        if (LobbyWindow->objectName().isEmpty())
            LobbyWindow->setObjectName(QString::fromUtf8("LobbyWindow"));
        LobbyWindow->resize(1440, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/d20v2.png"), QSize(), QIcon::Normal, QIcon::Off);
        LobbyWindow->setWindowIcon(icon);
        LobbyWindow->setStyleSheet(QString::fromUtf8(""));
        actionSave = new QAction(LobbyWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/diskette.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setBold(true);
        font.setWeight(75);
        actionSave->setFont(font);
        actionOptions = new QAction(LobbyWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/fonts/img/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon2);
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
        centralwidget = new QWidget(LobbyWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget_2 = new QTableWidget(centralwidget);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(20, 70, 770, 770));
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(890, 10, 182, 222));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(180, 60));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 24pt \"ImperatorSmallCaps\";\n"
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

        verticalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(180, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 24pt \"ImperatorSmallCaps\";\n"
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

        verticalLayout_5->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(180, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 24pt \"ImperatorSmallCaps\";\n"
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

        verticalLayout_5->addWidget(pushButton_3);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1170, 10, 251, 631));
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
        label_2->setGeometry(QRect(0, 0, 251, 60));
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
        pushButton_Move->setGeometry(QRect(870, 280, 121, 61));
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
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(790, 250, 80, 21));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(801, 650, 621, 221));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(310, 30));
        label_3->setMaximumSize(QSize(310, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 16pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_3);

        system_log = new QTextBrowser(layoutWidget1);
        system_log->setObjectName(QString::fromUtf8("system_log"));
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

        verticalLayout_4->addWidget(system_log);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(830, 420, 275, 168));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(129, 60));
        label_4->setMaximumSize(QSize(130, 60));
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

        label_currMap = new QLabel(layoutWidget2);
        label_currMap->setObjectName(QString::fromUtf8("label_currMap"));
        label_currMap->setMinimumSize(QSize(129, 60));
        label_currMap->setMaximumSize(QSize(130, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(9);
        label_currMap->setFont(font3);
        label_currMap->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
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

        pushButton_nextMap = new QPushButton(layoutWidget2);
        pushButton_nextMap->setObjectName(QString::fromUtf8("pushButton_nextMap"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_nextMap->sizePolicy().hasHeightForWidth());
        pushButton_nextMap->setSizePolicy(sizePolicy1);
        pushButton_nextMap->setMinimumSize(QSize(99, 30));
        pushButton_nextMap->setMaximumSize(QSize(100, 30));
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
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(130, 60));
        label_5->setMaximumSize(QSize(130, 60));
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

        label_currChar = new QLabel(layoutWidget2);
        label_currChar->setObjectName(QString::fromUtf8("label_currChar"));
        label_currChar->setMinimumSize(QSize(130, 60));
        label_currChar->setMaximumSize(QSize(130, 60));
        label_currChar->setFont(font3);
        label_currChar->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
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

        pushButton_nextCharacter = new QPushButton(layoutWidget2);
        pushButton_nextCharacter->setObjectName(QString::fromUtf8("pushButton_nextCharacter"));
        pushButton_nextCharacter->setMinimumSize(QSize(100, 20));
        pushButton_nextCharacter->setMaximumSize(QSize(100, 30));
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

        comboBox_Maps = new QComboBox(centralwidget);
        comboBox_Maps->setObjectName(QString::fromUtf8("comboBox_Maps"));
        comboBox_Maps->setGeometry(QRect(860, 350, 201, 51));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(1040, 290, 72, 22));
        pushButton_Grid = new QPushButton(centralwidget);
        pushButton_Grid->setObjectName(QString::fromUtf8("pushButton_Grid"));
        pushButton_Grid->setGeometry(QRect(20, 840, 101, 31));
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
        LobbyWindow->setCentralWidget(centralwidget);
        layoutWidget->raise();
        label->raise();
        layoutWidget->raise();
        groupBox->raise();
        pushButton_Move->raise();
        tableWidget_2->raise();
        tableWidget->raise();
        pushButton_5->raise();
        layoutWidget->raise();
        comboBox_Maps->raise();
        comboBox_2->raise();
        pushButton_Grid->raise();
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
        menuFile->setFont(font3);
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
        LobbyWindow->setMenuBar(menubar);
#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(system_log);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tableWidget, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_Move);
        QWidget::setTabOrder(pushButton_Move, pushButton_5);
        QWidget::setTabOrder(pushButton_5, tableWidget_2);
        QWidget::setTabOrder(tableWidget_2, pushButton_nextMap);
        QWidget::setTabOrder(pushButton_nextMap, pushButton_nextCharacter);
        QWidget::setTabOrder(pushButton_nextCharacter, comboBox_Maps);
        QWidget::setTabOrder(comboBox_Maps, comboBox_2);
        QWidget::setTabOrder(comboBox_2, pushButton_Grid);
        QWidget::setTabOrder(pushButton_Grid, pushButton);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(menuDelete->menuAction());
        menuFile->addAction(menuClose->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionOptions);
        menuNew->addAction(actionNewMap);
        menuNew->addAction(actionNewCharacter);
        menuDelete->addAction(actionDeleteMap);
        menuDelete->addAction(actionDeleteCharacter);

        retranslateUi(LobbyWindow);

        QMetaObject::connectSlotsByName(LobbyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LobbyWindow)
    {
        LobbyWindow->setWindowTitle(QApplication::translate("LobbyWindow", "Diceobu", nullptr));
        actionSave->setText(QApplication::translate("LobbyWindow", "Save", nullptr));
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
        label->setText(QApplication::translate("LobbyWindow", "Game Map", nullptr));
        pushButton->setText(QApplication::translate("LobbyWindow", "Inventory", nullptr));
        pushButton_2->setText(QApplication::translate("LobbyWindow", "Spells", nullptr));
        pushButton_3->setText(QApplication::translate("LobbyWindow", "Gear", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("LobbyWindow", "Friends", nullptr));
        pushButton_Move->setText(QApplication::translate("LobbyWindow", "Move", nullptr));
        pushButton_5->setText(QApplication::translate("LobbyWindow", "Not paint", nullptr));
        label_3->setText(QApplication::translate("LobbyWindow", "System Log", nullptr));
        system_log->setHtml(QApplication::translate("LobbyWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'ImperatorSmallCaps'; font-size:11pt; font-weight:72; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("LobbyWindow", "Current \n"
" Map", nullptr));
        label_currMap->setText(QString());
        pushButton_nextMap->setText(QApplication::translate("LobbyWindow", ">>", nullptr));
        label_5->setText(QApplication::translate("LobbyWindow", "Current \n"
" Character", nullptr));
        label_currChar->setText(QString());
        pushButton_nextCharacter->setText(QApplication::translate("LobbyWindow", ">>", nullptr));
        pushButton_Grid->setText(QApplication::translate("LobbyWindow", "Grid", nullptr));
        menuFile->setTitle(QApplication::translate("LobbyWindow", "File", nullptr));
        menuOpen->setTitle(QApplication::translate("LobbyWindow", "Open...", nullptr));
        menuNew->setTitle(QApplication::translate("LobbyWindow", "New...", nullptr));
        menuClose->setTitle(QApplication::translate("LobbyWindow", "Close", nullptr));
        menuDelete->setTitle(QApplication::translate("LobbyWindow", "Delete...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LobbyWindow: public Ui_LobbyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOBBYWINDOW_H
