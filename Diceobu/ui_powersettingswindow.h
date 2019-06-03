/********************************************************************************
** Form generated from reading UI file 'powersettingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWERSETTINGSWINDOW_H
#define UI_POWERSETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PowerSettingsWindow
{
public:
    QLabel *label_Level_Req;
    QLabel *label_Level_Req_Value;
    QLabel *label_Class;
    QLabel *label_Range;
    QLabel *label_Damage_Type;
    QLabel *label_Name;
    QLabel *label_AoE;
    QLabel *label_Damage;
    QTextBrowser *textBrowser_Description;
    QLabel *label_AoE_Value;
    QLabel *label_Class_Value;
    QLabel *label_Damage_Value;
    QLabel *label_Range_Value;
    QLabel *label_Damage_Type_Value;
    QFrame *line_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_target;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QComboBox *comboBox_Targets;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    QLabel *label;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_x;
    QLineEdit *field_x;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_y;
    QLineEdit *field_y;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *PowerSettingsWindow)
    {
        if (PowerSettingsWindow->objectName().isEmpty())
            PowerSettingsWindow->setObjectName(QString::fromUtf8("PowerSettingsWindow"));
        PowerSettingsWindow->resize(750, 310);
        PowerSettingsWindow->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-image: url(:/img/bg4.jpg);\n"
"}"));
        label_Level_Req = new QLabel(PowerSettingsWindow);
        label_Level_Req->setObjectName(QString::fromUtf8("label_Level_Req"));
        label_Level_Req->setGeometry(QRect(10, 60, 231, 36));
        label_Level_Req->setMinimumSize(QSize(0, 0));
        label_Level_Req->setMaximumSize(QSize(500, 60));
        label_Level_Req->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Level_Req->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Level_Req->setWordWrap(true);
        label_Level_Req_Value = new QLabel(PowerSettingsWindow);
        label_Level_Req_Value->setObjectName(QString::fromUtf8("label_Level_Req_Value"));
        label_Level_Req_Value->setGeometry(QRect(160, 60, 81, 36));
        label_Level_Req_Value->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Level_Req_Value->setScaledContents(true);
        label_Level_Req_Value->setAlignment(Qt::AlignCenter);
        label_Level_Req_Value->setWordWrap(true);
        label_Class = new QLabel(PowerSettingsWindow);
        label_Class->setObjectName(QString::fromUtf8("label_Class"));
        label_Class->setGeometry(QRect(10, 100, 231, 36));
        label_Class->setMinimumSize(QSize(0, 0));
        label_Class->setMaximumSize(QSize(500, 60));
        label_Class->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Class->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Class->setWordWrap(true);
        label_Range = new QLabel(PowerSettingsWindow);
        label_Range->setObjectName(QString::fromUtf8("label_Range"));
        label_Range->setGeometry(QRect(10, 140, 231, 36));
        label_Range->setMinimumSize(QSize(0, 0));
        label_Range->setMaximumSize(QSize(500, 60));
        label_Range->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Range->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Range->setWordWrap(true);
        label_Damage_Type = new QLabel(PowerSettingsWindow);
        label_Damage_Type->setObjectName(QString::fromUtf8("label_Damage_Type"));
        label_Damage_Type->setGeometry(QRect(260, 100, 231, 36));
        label_Damage_Type->setMinimumSize(QSize(0, 0));
        label_Damage_Type->setMaximumSize(QSize(500, 60));
        label_Damage_Type->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Damage_Type->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Damage_Type->setWordWrap(true);
        label_Name = new QLabel(PowerSettingsWindow);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(140, 10, 211, 41));
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
        label_AoE = new QLabel(PowerSettingsWindow);
        label_AoE->setObjectName(QString::fromUtf8("label_AoE"));
        label_AoE->setGeometry(QRect(260, 140, 231, 36));
        label_AoE->setMinimumSize(QSize(0, 0));
        label_AoE->setMaximumSize(QSize(500, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_AoE->setFont(font);
        label_AoE->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_AoE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_AoE->setWordWrap(true);
        label_Damage = new QLabel(PowerSettingsWindow);
        label_Damage->setObjectName(QString::fromUtf8("label_Damage"));
        label_Damage->setGeometry(QRect(260, 60, 231, 36));
        label_Damage->setMinimumSize(QSize(0, 0));
        label_Damage->setMaximumSize(QSize(500, 60));
        label_Damage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_Damage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Damage->setWordWrap(true);
        textBrowser_Description = new QTextBrowser(PowerSettingsWindow);
        textBrowser_Description->setObjectName(QString::fromUtf8("textBrowser_Description"));
        textBrowser_Description->setGeometry(QRect(10, 190, 481, 101));
        textBrowser_Description->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 gray, stop:1 gray);\n"
"font: 75 16pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}"));
        label_AoE_Value = new QLabel(PowerSettingsWindow);
        label_AoE_Value->setObjectName(QString::fromUtf8("label_AoE_Value"));
        label_AoE_Value->setGeometry(QRect(410, 140, 81, 36));
        label_AoE_Value->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 11pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_AoE_Value->setScaledContents(true);
        label_AoE_Value->setAlignment(Qt::AlignCenter);
        label_AoE_Value->setWordWrap(true);
        label_Class_Value = new QLabel(PowerSettingsWindow);
        label_Class_Value->setObjectName(QString::fromUtf8("label_Class_Value"));
        label_Class_Value->setGeometry(QRect(160, 100, 81, 36));
        label_Class_Value->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Class_Value->setScaledContents(true);
        label_Class_Value->setAlignment(Qt::AlignCenter);
        label_Class_Value->setWordWrap(true);
        label_Damage_Value = new QLabel(PowerSettingsWindow);
        label_Damage_Value->setObjectName(QString::fromUtf8("label_Damage_Value"));
        label_Damage_Value->setGeometry(QRect(410, 60, 81, 36));
        label_Damage_Value->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Damage_Value->setScaledContents(true);
        label_Damage_Value->setAlignment(Qt::AlignCenter);
        label_Damage_Value->setWordWrap(true);
        label_Range_Value = new QLabel(PowerSettingsWindow);
        label_Range_Value->setObjectName(QString::fromUtf8("label_Range_Value"));
        label_Range_Value->setGeometry(QRect(160, 140, 81, 36));
        label_Range_Value->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Range_Value->setScaledContents(true);
        label_Range_Value->setAlignment(Qt::AlignCenter);
        label_Range_Value->setWordWrap(true);
        label_Damage_Type_Value = new QLabel(PowerSettingsWindow);
        label_Damage_Type_Value->setObjectName(QString::fromUtf8("label_Damage_Type_Value"));
        label_Damage_Type_Value->setGeometry(QRect(410, 100, 81, 36));
        label_Damage_Type_Value->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Damage_Type_Value->setScaledContents(true);
        label_Damage_Type_Value->setAlignment(Qt::AlignCenter);
        label_Damage_Type_Value->setWordWrap(true);
        line_3 = new QFrame(PowerSettingsWindow);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(500, 10, 10, 281));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(PowerSettingsWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(530, 20, 197, 269));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_target = new QLabel(widget);
        label_target->setObjectName(QString::fromUtf8("label_target"));
        label_target->setMinimumSize(QSize(50, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_target->setFont(font1);
        label_target->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));

        verticalLayout_2->addWidget(label_target);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        comboBox_Targets = new QComboBox(widget);
        comboBox_Targets->setObjectName(QString::fromUtf8("comboBox_Targets"));
        comboBox_Targets->setMinimumSize(QSize(130, 0));
        comboBox_Targets->setFont(font);
        comboBox_Targets->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"background-color: rgb(45, 45, 45);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: rgb(88, 88, 88);\n"
"border-width: 1px;\n"
"border-radius: 2px;\n"
"color: rgb(220, 220, 220);\n"
"\n"
"}"));

        verticalLayout->addWidget(comboBox_Targets);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(68, 20));
        line->setMaximumSize(QSize(100, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(30, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(68, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_x = new QLabel(widget);
        label_x->setObjectName(QString::fromUtf8("label_x"));
        label_x->setMinimumSize(QSize(35, 25));
        label_x->setMaximumSize(QSize(35, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_x->setFont(font3);
        label_x->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_x->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_2->addWidget(label_x);

        field_x = new QLineEdit(widget);
        field_x->setObjectName(QString::fromUtf8("field_x"));
        field_x->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(field_x->sizePolicy().hasHeightForWidth());
        field_x->setSizePolicy(sizePolicy);
        field_x->setMinimumSize(QSize(30, 25));
        field_x->setMaximumSize(QSize(30, 25));
        field_x->setBaseSize(QSize(40, 0));
        field_x->setFont(font);
        field_x->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        field_x->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(field_x);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_y = new QLabel(widget);
        label_y->setObjectName(QString::fromUtf8("label_y"));
        label_y->setMinimumSize(QSize(35, 25));
        label_y->setMaximumSize(QSize(35, 25));
        label_y->setFont(font3);
        label_y->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_y->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_3->addWidget(label_y);

        field_y = new QLineEdit(widget);
        field_y->setObjectName(QString::fromUtf8("field_y"));
        field_y->setMinimumSize(QSize(30, 25));
        field_y->setMaximumSize(QSize(30, 25));
        field_y->setFont(font);
        field_y->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(field_y);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_confirm = new QPushButton(widget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(0, 35));
        pushButton_confirm->setMaximumSize(QSize(130, 100));
        QFont font4;
        font4.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(9);
        pushButton_confirm->setFont(font4);
        pushButton_confirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(pushButton_confirm);

        pushButton_cancel = new QPushButton(widget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(0, 35));
        pushButton_cancel->setMaximumSize(QSize(130, 100));
        pushButton_cancel->setFont(font4);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

#ifndef QT_NO_SHORTCUT
        label_x->setBuddy(field_y);
        label_y->setBuddy(field_x);
#endif // QT_NO_SHORTCUT

        retranslateUi(PowerSettingsWindow);

        QMetaObject::connectSlotsByName(PowerSettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *PowerSettingsWindow)
    {
        PowerSettingsWindow->setWindowTitle(QApplication::translate("PowerSettingsWindow", "Dialog", nullptr));
        label_Level_Req->setText(QApplication::translate("PowerSettingsWindow", "Level Req.:", nullptr));
        label_Level_Req_Value->setText(QApplication::translate("PowerSettingsWindow", "Level", nullptr));
        label_Class->setText(QApplication::translate("PowerSettingsWindow", "Class Req.:", nullptr));
        label_Range->setText(QApplication::translate("PowerSettingsWindow", "Range:", nullptr));
        label_Damage_Type->setText(QApplication::translate("PowerSettingsWindow", "Type:", nullptr));
        label_Name->setText(QApplication::translate("PowerSettingsWindow", "Name", nullptr));
        label_AoE->setText(QApplication::translate("PowerSettingsWindow", "Area of Effect:", nullptr));
        label_Damage->setText(QApplication::translate("PowerSettingsWindow", "Damage:", nullptr));
        label_AoE_Value->setText(QApplication::translate("PowerSettingsWindow", "AoE", nullptr));
        label_Class_Value->setText(QApplication::translate("PowerSettingsWindow", "Class", nullptr));
        label_Damage_Value->setText(QApplication::translate("PowerSettingsWindow", "Damage", nullptr));
        label_Range_Value->setText(QApplication::translate("PowerSettingsWindow", "Range", nullptr));
        label_Damage_Type_Value->setText(QApplication::translate("PowerSettingsWindow", "DT", nullptr));
        label_target->setText(QApplication::translate("PowerSettingsWindow", "Target:", nullptr));
        label->setText(QApplication::translate("PowerSettingsWindow", "OR", nullptr));
        label_x->setText(QApplication::translate("PowerSettingsWindow", "X :", nullptr));
        label_y->setText(QApplication::translate("PowerSettingsWindow", "Y :", nullptr));
        pushButton_confirm->setText(QApplication::translate("PowerSettingsWindow", "Confirm", nullptr));
        pushButton_cancel->setText(QApplication::translate("PowerSettingsWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PowerSettingsWindow: public Ui_PowerSettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWERSETTINGSWINDOW_H
