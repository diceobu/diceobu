/********************************************************************************
** Form generated from reading UI file 'characterdetailswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERDETAILSWINDOW_H
#define UI_CHARACTERDETAILSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharacterDetailsWindow
{
public:
    QLabel *label_Ability_Scores;
    QLabel *label_EXP;
    QLabel *label_Image;
    QGroupBox *groupBox_Entity_Details;
    QLabel *label_Current_Map;
    QLabel *label_ID;
    QLabel *label_ID_Tag;
    QLabel *label_Map_Tag;
    QLabel *label_XY_Tag;
    QLabel *label_XY;
    QLabel *label_Background_Race;
    QLabel *label_Name;
    QLabel *label_HP;
    QLabel *label_AC;
    QLabel *label_Balance;
    QLabel *label_Class_Level;
    QLabel *label_Alignment;
    QLabel *label_Image_Value;
    QLabel *label_Ability_Scores_Value;
    QLabel *label_AC_Value;
    QLabel *label_HP_Tag;
    QLabel *label_EXP_Tag;
    QLabel *label_Balance_tag;
    QGroupBox *groupBox_Powers;
    QListWidget *listWidget_Powers;
    QGroupBox *groupBox_Physical_Traits;
    QLabel *label_Size;
    QLabel *label_Weight;
    QLabel *label_Height;
    QLabel *label_Height_Tag;
    QLabel *label_Size_Tag;
    QLabel *label_Weight_Tag;
    QLabel *label_Vision_Range;
    QLabel *label_Reach;
    QLabel *label_Vision_Tag;
    QLabel *label_Reach_Tag;
    QLabel *label_Speed_Tag;
    QLabel *label_Speed;
    QGroupBox *groupBox_Languages;
    QListWidget *listWidget_Languages;
    QPushButton *pushButton_Inventory;
    QLabel *label_Ability_Scores_Value_Tag;
    QLabel *label_AC_Value_Tag;
    QFrame *line;
    QLabel *label_More_Details;
    QFrame *line_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_More;
    QPushButton *pushButton_close;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Less;
    QPushButton *pushButton_close_2;

    void setupUi(QDialog *CharacterDetailsWindow)
    {
        if (CharacterDetailsWindow->objectName().isEmpty())
            CharacterDetailsWindow->setObjectName(QString::fromUtf8("CharacterDetailsWindow"));
        CharacterDetailsWindow->resize(640, 760);
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setBold(true);
        font.setWeight(75);
        CharacterDetailsWindow->setFont(font);
        CharacterDetailsWindow->setAutoFillBackground(false);
        CharacterDetailsWindow->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-image: url(:/img/bg4.jpg);\n"
"}"));
        label_Ability_Scores = new QLabel(CharacterDetailsWindow);
        label_Ability_Scores->setObjectName(QString::fromUtf8("label_Ability_Scores"));
        label_Ability_Scores->setGeometry(QRect(497, 110, 80, 84));
        label_Ability_Scores->setMinimumSize(QSize(80, 84));
        label_Ability_Scores->setMaximumSize(QSize(80, 84));
        QFont font1;
        font1.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_Ability_Scores->setFont(font1);
        label_Ability_Scores->setStyleSheet(QString::fromUtf8(""));
        label_Ability_Scores->setWordWrap(true);
        label_EXP = new QLabel(CharacterDetailsWindow);
        label_EXP->setObjectName(QString::fromUtf8("label_EXP"));
        label_EXP->setGeometry(QRect(300, 200, 111, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        label_EXP->setFont(font2);
        label_EXP->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_EXP->setAlignment(Qt::AlignCenter);
        label_EXP->setWordWrap(true);
        label_Image = new QLabel(CharacterDetailsWindow);
        label_Image->setObjectName(QString::fromUtf8("label_Image"));
        label_Image->setGeometry(QRect(20, 10, 205, 273));
        label_Image->setMinimumSize(QSize(205, 273));
        label_Image->setMaximumSize(QSize(256, 341));
        label_Image->setStyleSheet(QString::fromUtf8("/*QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 24pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Image->setWordWrap(true);
        groupBox_Entity_Details = new QGroupBox(CharacterDetailsWindow);
        groupBox_Entity_Details->setObjectName(QString::fromUtf8("groupBox_Entity_Details"));
        groupBox_Entity_Details->setGeometry(QRect(450, 570, 181, 131));
        groupBox_Entity_Details->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
" border: 2px solid black;\n"
" border-radius: 5px;\n"
" margin-top: 2ex;\n"
"color: white;\n"
"border-color: white;\n"
"}"));
        label_Current_Map = new QLabel(groupBox_Entity_Details);
        label_Current_Map->setObjectName(QString::fromUtf8("label_Current_Map"));
        label_Current_Map->setGeometry(QRect(70, 60, 101, 31));
        label_Current_Map->setFont(font2);
        label_Current_Map->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Current_Map->setAlignment(Qt::AlignCenter);
        label_Current_Map->setWordWrap(true);
        label_ID = new QLabel(groupBox_Entity_Details);
        label_ID->setObjectName(QString::fromUtf8("label_ID"));
        label_ID->setGeometry(QRect(70, 30, 101, 31));
        label_ID->setFont(font2);
        label_ID->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_ID->setAlignment(Qt::AlignCenter);
        label_ID->setWordWrap(true);
        label_ID_Tag = new QLabel(groupBox_Entity_Details);
        label_ID_Tag->setObjectName(QString::fromUtf8("label_ID_Tag"));
        label_ID_Tag->setGeometry(QRect(10, 30, 130, 31));
        label_ID_Tag->setMinimumSize(QSize(0, 0));
        label_ID_Tag->setMaximumSize(QSize(130, 60));
        label_ID_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_ID_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_ID_Tag->setWordWrap(true);
        label_Map_Tag = new QLabel(groupBox_Entity_Details);
        label_Map_Tag->setObjectName(QString::fromUtf8("label_Map_Tag"));
        label_Map_Tag->setGeometry(QRect(10, 60, 130, 31));
        label_Map_Tag->setMinimumSize(QSize(0, 0));
        label_Map_Tag->setMaximumSize(QSize(130, 60));
        label_Map_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Map_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Map_Tag->setWordWrap(true);
        label_XY_Tag = new QLabel(groupBox_Entity_Details);
        label_XY_Tag->setObjectName(QString::fromUtf8("label_XY_Tag"));
        label_XY_Tag->setGeometry(QRect(10, 90, 130, 31));
        label_XY_Tag->setMinimumSize(QSize(0, 0));
        label_XY_Tag->setMaximumSize(QSize(130, 60));
        label_XY_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_XY_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_XY_Tag->setWordWrap(true);
        label_XY = new QLabel(groupBox_Entity_Details);
        label_XY->setObjectName(QString::fromUtf8("label_XY"));
        label_XY->setGeometry(QRect(70, 90, 101, 31));
        label_XY->setFont(font2);
        label_XY->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_XY->setAlignment(Qt::AlignCenter);
        label_XY->setWordWrap(true);
        label_ID_Tag->raise();
        label_ID->raise();
        label_Map_Tag->raise();
        label_Current_Map->raise();
        label_XY_Tag->raise();
        label_XY->raise();
        label_Background_Race = new QLabel(CharacterDetailsWindow);
        label_Background_Race->setObjectName(QString::fromUtf8("label_Background_Race"));
        label_Background_Race->setGeometry(QRect(455, 230, 165, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(9);
        label_Background_Race->setFont(font3);
        label_Background_Race->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Background_Race->setAlignment(Qt::AlignCenter);
        label_Background_Race->setWordWrap(true);
        label_Name = new QLabel(CharacterDetailsWindow);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(229, 10, 212, 51));
        label_Name->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 20pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Name->setScaledContents(true);
        label_Name->setAlignment(Qt::AlignCenter);
        label_Name->setWordWrap(true);
        label_HP = new QLabel(CharacterDetailsWindow);
        label_HP->setObjectName(QString::fromUtf8("label_HP"));
        label_HP->setGeometry(QRect(290, 160, 121, 31));
        label_HP->setFont(font3);
        label_HP->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_HP->setAlignment(Qt::AlignCenter);
        label_HP->setWordWrap(true);
        label_AC = new QLabel(CharacterDetailsWindow);
        label_AC->setObjectName(QString::fromUtf8("label_AC"));
        label_AC->setGeometry(QRect(502, 20, 70, 72));
        label_AC->setMinimumSize(QSize(70, 72));
        label_AC->setMaximumSize(QSize(70, 72));
        label_AC->setFont(font1);
        label_AC->setStyleSheet(QString::fromUtf8(""));
        label_AC->setAlignment(Qt::AlignCenter);
        label_AC->setWordWrap(true);
        label_Balance = new QLabel(CharacterDetailsWindow);
        label_Balance->setObjectName(QString::fromUtf8("label_Balance"));
        label_Balance->setGeometry(QRect(338, 290, 71, 31));
        label_Balance->setFont(font2);
        label_Balance->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Balance->setAlignment(Qt::AlignCenter);
        label_Balance->setWordWrap(true);
        label_Class_Level = new QLabel(CharacterDetailsWindow);
        label_Class_Level->setObjectName(QString::fromUtf8("label_Class_Level"));
        label_Class_Level->setGeometry(QRect(255, 80, 160, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_Class_Level->setFont(font4);
        label_Class_Level->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font:  \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Class_Level->setAlignment(Qt::AlignCenter);
        label_Class_Level->setWordWrap(true);
        label_Alignment = new QLabel(CharacterDetailsWindow);
        label_Alignment->setObjectName(QString::fromUtf8("label_Alignment"));
        label_Alignment->setGeometry(QRect(455, 300, 165, 40));
        label_Alignment->setFont(font3);
        label_Alignment->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 14pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Alignment->setAlignment(Qt::AlignCenter);
        label_Alignment->setWordWrap(true);
        label_Image_Value = new QLabel(CharacterDetailsWindow);
        label_Image_Value->setObjectName(QString::fromUtf8("label_Image_Value"));
        label_Image_Value->setGeometry(QRect(40, 30, 165, 233));
        label_Image_Value->setFont(font1);
        label_Image_Value->setStyleSheet(QString::fromUtf8("/*QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}*/\n"
""));
        label_Image_Value->setWordWrap(true);
        label_Ability_Scores_Value = new QLabel(CharacterDetailsWindow);
        label_Ability_Scores_Value->setObjectName(QString::fromUtf8("label_Ability_Scores_Value"));
        label_Ability_Scores_Value->setGeometry(QRect(497, 135, 80, 31));
        label_Ability_Scores_Value->setFont(font1);
        label_Ability_Scores_Value->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"}\n"
""));
        label_Ability_Scores_Value->setAlignment(Qt::AlignCenter);
        label_Ability_Scores_Value->setWordWrap(true);
        label_AC_Value = new QLabel(CharacterDetailsWindow);
        label_AC_Value->setObjectName(QString::fromUtf8("label_AC_Value"));
        label_AC_Value->setGeometry(QRect(502, 35, 70, 31));
        label_AC_Value->setFont(font1);
        label_AC_Value->setStyleSheet(QString::fromUtf8(""));
        label_AC_Value->setAlignment(Qt::AlignCenter);
        label_AC_Value->setWordWrap(true);
        label_HP_Tag = new QLabel(CharacterDetailsWindow);
        label_HP_Tag->setObjectName(QString::fromUtf8("label_HP_Tag"));
        label_HP_Tag->setGeometry(QRect(255, 160, 71, 31));
        label_HP_Tag->setMinimumSize(QSize(0, 0));
        label_HP_Tag->setMaximumSize(QSize(130, 60));
        label_HP_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_HP_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_HP_Tag->setWordWrap(true);
        label_EXP_Tag = new QLabel(CharacterDetailsWindow);
        label_EXP_Tag->setObjectName(QString::fromUtf8("label_EXP_Tag"));
        label_EXP_Tag->setGeometry(QRect(255, 200, 71, 31));
        label_EXP_Tag->setMinimumSize(QSize(0, 0));
        label_EXP_Tag->setMaximumSize(QSize(130, 60));
        label_EXP_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_EXP_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_EXP_Tag->setWordWrap(true);
        label_Balance_tag = new QLabel(CharacterDetailsWindow);
        label_Balance_tag->setObjectName(QString::fromUtf8("label_Balance_tag"));
        label_Balance_tag->setGeometry(QRect(255, 290, 130, 31));
        label_Balance_tag->setMinimumSize(QSize(0, 0));
        label_Balance_tag->setMaximumSize(QSize(130, 60));
        label_Balance_tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Balance_tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Balance_tag->setWordWrap(true);
        groupBox_Powers = new QGroupBox(CharacterDetailsWindow);
        groupBox_Powers->setObjectName(QString::fromUtf8("groupBox_Powers"));
        groupBox_Powers->setGeometry(QRect(220, 470, 211, 281));
        groupBox_Powers->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
" border: 2px solid black;\n"
" margin-top: 2ex;\n"
" border-radius: 5px;\n"
"color: white;\n"
"border-color: white;\n"
"}"));
        listWidget_Powers = new QListWidget(groupBox_Powers);
        listWidget_Powers->setObjectName(QString::fromUtf8("listWidget_Powers"));
        listWidget_Powers->setGeometry(QRect(10, 30, 191, 241));
        listWidget_Powers->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        groupBox_Physical_Traits = new QGroupBox(CharacterDetailsWindow);
        groupBox_Physical_Traits->setObjectName(QString::fromUtf8("groupBox_Physical_Traits"));
        groupBox_Physical_Traits->setGeometry(QRect(20, 470, 181, 281));
        groupBox_Physical_Traits->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
" border: 2px solid black;\n"
" margin-top: 2ex;\n"
" border-radius: 5px;\n"
"color: white;\n"
"border-color: white;\n"
"}"));
        label_Size = new QLabel(groupBox_Physical_Traits);
        label_Size->setObjectName(QString::fromUtf8("label_Size"));
        label_Size->setGeometry(QRect(60, 40, 101, 31));
        label_Size->setFont(font2);
        label_Size->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Size->setAlignment(Qt::AlignCenter);
        label_Size->setWordWrap(true);
        label_Weight = new QLabel(groupBox_Physical_Traits);
        label_Weight->setObjectName(QString::fromUtf8("label_Weight"));
        label_Weight->setGeometry(QRect(90, 100, 71, 31));
        label_Weight->setFont(font2);
        label_Weight->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Weight->setAlignment(Qt::AlignCenter);
        label_Weight->setWordWrap(true);
        label_Height = new QLabel(groupBox_Physical_Traits);
        label_Height->setObjectName(QString::fromUtf8("label_Height"));
        label_Height->setGeometry(QRect(90, 70, 71, 31));
        label_Height->setFont(font2);
        label_Height->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Height->setAlignment(Qt::AlignCenter);
        label_Height->setWordWrap(true);
        label_Height_Tag = new QLabel(groupBox_Physical_Traits);
        label_Height_Tag->setObjectName(QString::fromUtf8("label_Height_Tag"));
        label_Height_Tag->setGeometry(QRect(10, 70, 130, 31));
        label_Height_Tag->setMinimumSize(QSize(0, 0));
        label_Height_Tag->setMaximumSize(QSize(130, 60));
        label_Height_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Height_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Height_Tag->setWordWrap(true);
        label_Size_Tag = new QLabel(groupBox_Physical_Traits);
        label_Size_Tag->setObjectName(QString::fromUtf8("label_Size_Tag"));
        label_Size_Tag->setGeometry(QRect(10, 40, 130, 31));
        label_Size_Tag->setMinimumSize(QSize(0, 0));
        label_Size_Tag->setMaximumSize(QSize(130, 60));
        label_Size_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Size_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Size_Tag->setWordWrap(true);
        label_Weight_Tag = new QLabel(groupBox_Physical_Traits);
        label_Weight_Tag->setObjectName(QString::fromUtf8("label_Weight_Tag"));
        label_Weight_Tag->setGeometry(QRect(10, 100, 130, 31));
        label_Weight_Tag->setMinimumSize(QSize(0, 0));
        label_Weight_Tag->setMaximumSize(QSize(130, 60));
        label_Weight_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Weight_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Weight_Tag->setWordWrap(true);
        label_Vision_Range = new QLabel(groupBox_Physical_Traits);
        label_Vision_Range->setObjectName(QString::fromUtf8("label_Vision_Range"));
        label_Vision_Range->setGeometry(QRect(80, 230, 81, 31));
        label_Vision_Range->setFont(font2);
        label_Vision_Range->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Vision_Range->setAlignment(Qt::AlignCenter);
        label_Vision_Range->setWordWrap(true);
        label_Reach = new QLabel(groupBox_Physical_Traits);
        label_Reach->setObjectName(QString::fromUtf8("label_Reach"));
        label_Reach->setGeometry(QRect(80, 170, 81, 31));
        label_Reach->setFont(font2);
        label_Reach->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Reach->setAlignment(Qt::AlignCenter);
        label_Reach->setWordWrap(true);
        label_Vision_Tag = new QLabel(groupBox_Physical_Traits);
        label_Vision_Tag->setObjectName(QString::fromUtf8("label_Vision_Tag"));
        label_Vision_Tag->setGeometry(QRect(10, 230, 130, 31));
        label_Vision_Tag->setMinimumSize(QSize(0, 0));
        label_Vision_Tag->setMaximumSize(QSize(130, 60));
        label_Vision_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Vision_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Vision_Tag->setWordWrap(true);
        label_Reach_Tag = new QLabel(groupBox_Physical_Traits);
        label_Reach_Tag->setObjectName(QString::fromUtf8("label_Reach_Tag"));
        label_Reach_Tag->setGeometry(QRect(10, 170, 130, 31));
        label_Reach_Tag->setMinimumSize(QSize(0, 0));
        label_Reach_Tag->setMaximumSize(QSize(130, 60));
        label_Reach_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Reach_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Reach_Tag->setWordWrap(true);
        label_Speed_Tag = new QLabel(groupBox_Physical_Traits);
        label_Speed_Tag->setObjectName(QString::fromUtf8("label_Speed_Tag"));
        label_Speed_Tag->setGeometry(QRect(10, 200, 130, 31));
        label_Speed_Tag->setMinimumSize(QSize(0, 0));
        label_Speed_Tag->setMaximumSize(QSize(130, 60));
        label_Speed_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Speed_Tag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Speed_Tag->setWordWrap(true);
        label_Speed = new QLabel(groupBox_Physical_Traits);
        label_Speed->setObjectName(QString::fromUtf8("label_Speed"));
        label_Speed->setGeometry(QRect(80, 200, 81, 31));
        label_Speed->setFont(font2);
        label_Speed->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Speed->setAlignment(Qt::AlignCenter);
        label_Speed->setWordWrap(true);
        label_Weight_Tag->raise();
        label_Size_Tag->raise();
        label_Speed_Tag->raise();
        label_Reach_Tag->raise();
        label_Vision_Tag->raise();
        label_Height_Tag->raise();
        label_Size->raise();
        label_Weight->raise();
        label_Height->raise();
        label_Vision_Range->raise();
        label_Reach->raise();
        label_Speed->raise();
        groupBox_Languages = new QGroupBox(CharacterDetailsWindow);
        groupBox_Languages->setObjectName(QString::fromUtf8("groupBox_Languages"));
        groupBox_Languages->setGeometry(QRect(450, 470, 181, 91));
        groupBox_Languages->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
" border: 2px solid black;\n"
" margin-top: 2ex;\n"
" border-radius: 5px;\n"
"color: white;\n"
"border-color: white;\n"
"}"));
        listWidget_Languages = new QListWidget(groupBox_Languages);
        listWidget_Languages->setObjectName(QString::fromUtf8("listWidget_Languages"));
        listWidget_Languages->setGeometry(QRect(10, 30, 161, 51));
        listWidget_Languages->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        pushButton_Inventory = new QPushButton(CharacterDetailsWindow);
        pushButton_Inventory->setObjectName(QString::fromUtf8("pushButton_Inventory"));
        pushButton_Inventory->setGeometry(QRect(35, 290, 175, 50));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Inventory->sizePolicy().hasHeightForWidth());
        pushButton_Inventory->setSizePolicy(sizePolicy);
        pushButton_Inventory->setMinimumSize(QSize(0, 0));
        pushButton_Inventory->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 20pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: rgb(88, 88, 88);\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 20pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: white;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
""));
        label_Ability_Scores_Value_Tag = new QLabel(CharacterDetailsWindow);
        label_Ability_Scores_Value_Tag->setObjectName(QString::fromUtf8("label_Ability_Scores_Value_Tag"));
        label_Ability_Scores_Value_Tag->setGeometry(QRect(497, 110, 80, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font5.setPointSize(8);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        label_Ability_Scores_Value_Tag->setFont(font5);
        label_Ability_Scores_Value_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 75 8pt \"ImperatorSmallCaps\";\n"
"color: black;\n"
"}\n"
""));
        label_Ability_Scores_Value_Tag->setAlignment(Qt::AlignCenter);
        label_Ability_Scores_Value_Tag->setWordWrap(true);
        label_AC_Value_Tag = new QLabel(CharacterDetailsWindow);
        label_AC_Value_Tag->setObjectName(QString::fromUtf8("label_AC_Value_Tag"));
        label_AC_Value_Tag->setGeometry(QRect(502, 55, 70, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font6.setPointSize(6);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(9);
        label_AC_Value_Tag->setFont(font6);
        label_AC_Value_Tag->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 75 6pt \"ImperatorSmallCaps\";\n"
"color: black;\n"
"}\n"
""));
        label_AC_Value_Tag->setAlignment(Qt::AlignCenter);
        label_AC_Value_Tag->setWordWrap(true);
        line = new QFrame(CharacterDetailsWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 395, 220, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_More_Details = new QLabel(CharacterDetailsWindow);
        label_More_Details->setObjectName(QString::fromUtf8("label_More_Details"));
        label_More_Details->setGeometry(QRect(260, 397, 120, 16));
        label_More_Details->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"color: white\n"
";\n"
"}\n"
""));
        line_2 = new QFrame(CharacterDetailsWindow);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(400, 395, 220, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(CharacterDetailsWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 360, 181, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_More = new QPushButton(layoutWidget);
        pushButton_More->setObjectName(QString::fromUtf8("pushButton_More"));
        pushButton_More->setMinimumSize(QSize(0, 35));
        pushButton_More->setMaximumSize(QSize(130, 100));
        QFont font7;
        font7.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font7.setPointSize(10);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setWeight(9);
        pushButton_More->setFont(font7);
        pushButton_More->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: rgb(88, 88, 88);\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: white;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_More);

        pushButton_close = new QPushButton(layoutWidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(0, 35));
        pushButton_close->setMaximumSize(QSize(130, 100));
        pushButton_close->setFont(font7);
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: rgb(88, 88, 88);\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: white;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_close);

        layoutWidget1 = new QWidget(CharacterDetailsWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(450, 710, 181, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Less = new QPushButton(layoutWidget1);
        pushButton_Less->setObjectName(QString::fromUtf8("pushButton_Less"));
        pushButton_Less->setMinimumSize(QSize(0, 35));
        pushButton_Less->setMaximumSize(QSize(130, 100));
        pushButton_Less->setFont(font7);
        pushButton_Less->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: rgb(88, 88, 88);\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: white;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_Less);

        pushButton_close_2 = new QPushButton(layoutWidget1);
        pushButton_close_2->setObjectName(QString::fromUtf8("pushButton_close_2"));
        pushButton_close_2->setMinimumSize(QSize(0, 35));
        pushButton_close_2->setMaximumSize(QSize(130, 100));
        pushButton_close_2->setFont(font7);
        pushButton_close_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: rgb(88, 88, 88);\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 10pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: white;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(220, 220, 220);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_close_2);

        layoutWidget->raise();
        layoutWidget->raise();
        label_EXP_Tag->raise();
        label_Ability_Scores->raise();
        label_EXP->raise();
        label_Image->raise();
        groupBox_Entity_Details->raise();
        label_Background_Race->raise();
        label_Name->raise();
        label_AC->raise();
        label_Class_Level->raise();
        label_Alignment->raise();
        label_Image_Value->raise();
        label_Ability_Scores_Value->raise();
        label_AC_Value->raise();
        label_HP_Tag->raise();
        label_HP->raise();
        label_Balance_tag->raise();
        label_Balance->raise();
        groupBox_Powers->raise();
        groupBox_Physical_Traits->raise();
        groupBox_Languages->raise();
        pushButton_Inventory->raise();
        label_Ability_Scores_Value_Tag->raise();
        label_AC_Value_Tag->raise();
        line->raise();
        label_More_Details->raise();
        line_2->raise();

        retranslateUi(CharacterDetailsWindow);

        QMetaObject::connectSlotsByName(CharacterDetailsWindow);
    } // setupUi

    void retranslateUi(QDialog *CharacterDetailsWindow)
    {
        CharacterDetailsWindow->setWindowTitle(QApplication::translate("CharacterDetailsWindow", "Dialog", nullptr));
        label_Ability_Scores->setText(QApplication::translate("CharacterDetailsWindow", "Ability \n"
"Score", nullptr));
        label_EXP->setText(QApplication::translate("CharacterDetailsWindow", "EXP", nullptr));
        label_Image->setText(QString());
        groupBox_Entity_Details->setTitle(QApplication::translate("CharacterDetailsWindow", "Entity Details", nullptr));
        label_Current_Map->setText(QApplication::translate("CharacterDetailsWindow", "currMap", nullptr));
        label_ID->setText(QApplication::translate("CharacterDetailsWindow", "entity ID", nullptr));
        label_ID_Tag->setText(QApplication::translate("CharacterDetailsWindow", "[ID]:", nullptr));
        label_Map_Tag->setText(QApplication::translate("CharacterDetailsWindow", "[Map]:", nullptr));
        label_XY_Tag->setText(QApplication::translate("CharacterDetailsWindow", "[X/Y]:", nullptr));
        label_XY->setText(QApplication::translate("CharacterDetailsWindow", "X/Y", nullptr));
        label_Background_Race->setText(QApplication::translate("CharacterDetailsWindow", "Background & Race & Gender", nullptr));
        label_Name->setText(QApplication::translate("CharacterDetailsWindow", "Name", nullptr));
        label_HP->setText(QApplication::translate("CharacterDetailsWindow", "20/20 (+0)", nullptr));
        label_AC->setText(QApplication::translate("CharacterDetailsWindow", "AC", nullptr));
        label_Balance->setText(QApplication::translate("CharacterDetailsWindow", "Balance", nullptr));
        label_Class_Level->setText(QApplication::translate("CharacterDetailsWindow", "Class, Level", nullptr));
        label_Alignment->setText(QApplication::translate("CharacterDetailsWindow", "Alignement", nullptr));
        label_Image_Value->setText(QString());
        label_Ability_Scores_Value->setText(QString());
        label_AC_Value->setText(QApplication::translate("CharacterDetailsWindow", "20", nullptr));
        label_HP_Tag->setText(QApplication::translate("CharacterDetailsWindow", "HP: ", nullptr));
        label_EXP_Tag->setText(QApplication::translate("CharacterDetailsWindow", "EXP:", nullptr));
        label_Balance_tag->setText(QApplication::translate("CharacterDetailsWindow", "Balance:", nullptr));
        groupBox_Powers->setTitle(QApplication::translate("CharacterDetailsWindow", "Powers", nullptr));
        groupBox_Physical_Traits->setTitle(QApplication::translate("CharacterDetailsWindow", "Physical Traits", nullptr));
        label_Size->setText(QApplication::translate("CharacterDetailsWindow", "Size", nullptr));
        label_Weight->setText(QApplication::translate("CharacterDetailsWindow", "Weight", nullptr));
        label_Height->setText(QApplication::translate("CharacterDetailsWindow", "Height", nullptr));
        label_Height_Tag->setText(QApplication::translate("CharacterDetailsWindow", "Height:", nullptr));
        label_Size_Tag->setText(QApplication::translate("CharacterDetailsWindow", "Size:", nullptr));
        label_Weight_Tag->setText(QApplication::translate("CharacterDetailsWindow", "Weight:", nullptr));
        label_Vision_Range->setText(QApplication::translate("CharacterDetailsWindow", "vision range", nullptr));
        label_Reach->setText(QApplication::translate("CharacterDetailsWindow", "Reach", nullptr));
        label_Vision_Tag->setText(QApplication::translate("CharacterDetailsWindow", "Vision:", nullptr));
        label_Reach_Tag->setText(QApplication::translate("CharacterDetailsWindow", "Reach:", nullptr));
        label_Speed_Tag->setText(QApplication::translate("CharacterDetailsWindow", "Speed:", nullptr));
        label_Speed->setText(QApplication::translate("CharacterDetailsWindow", "Speed", nullptr));
        groupBox_Languages->setTitle(QApplication::translate("CharacterDetailsWindow", "Languages", nullptr));
        pushButton_Inventory->setText(QApplication::translate("CharacterDetailsWindow", "Inventory", nullptr));
        label_Ability_Scores_Value_Tag->setText(QApplication::translate("CharacterDetailsWindow", "Ability Score", nullptr));
        label_AC_Value_Tag->setText(QApplication::translate("CharacterDetailsWindow", "Armor\n"
" Class", nullptr));
        label_More_Details->setText(QApplication::translate("CharacterDetailsWindow", "More Details", nullptr));
        pushButton_More->setText(QApplication::translate("CharacterDetailsWindow", "More...", nullptr));
        pushButton_close->setText(QApplication::translate("CharacterDetailsWindow", "Close", nullptr));
        pushButton_Less->setText(QApplication::translate("CharacterDetailsWindow", "Less", nullptr));
        pushButton_close_2->setText(QApplication::translate("CharacterDetailsWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharacterDetailsWindow: public Ui_CharacterDetailsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERDETAILSWINDOW_H
