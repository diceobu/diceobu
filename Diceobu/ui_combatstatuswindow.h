/********************************************************************************
** Form generated from reading UI file 'combatstatuswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBATSTATUSWINDOW_H
#define UI_COMBATSTATUSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_CombatStatusWindow
{
public:
    QGroupBox *groupBox_Combat_Order;
    QListWidget *listWidget_Combat_Order;
    QGroupBox *groupBox_Currently_Playing;
    QLabel *label_Currently_Playing;
    QGroupBox *groupBox_Status;

    void setupUi(QDialog *CombatStatusWindow)
    {
        if (CombatStatusWindow->objectName().isEmpty())
            CombatStatusWindow->setObjectName(QString::fromUtf8("CombatStatusWindow"));
        CombatStatusWindow->resize(441, 459);
        CombatStatusWindow->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-image: url(:/img/bg4.jpg);\n"
"}"));
        groupBox_Combat_Order = new QGroupBox(CombatStatusWindow);
        groupBox_Combat_Order->setObjectName(QString::fromUtf8("groupBox_Combat_Order"));
        groupBox_Combat_Order->setGeometry(QRect(10, 120, 421, 191));
        groupBox_Combat_Order->setFocusPolicy(Qt::NoFocus);
        groupBox_Combat_Order->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
" border: 2px solid black;\n"
" margin-top: 2ex;\n"
" border-radius: 5px;\n"
"color: white;\n"
"border-color: white;\n"
"}"));
        listWidget_Combat_Order = new QListWidget(groupBox_Combat_Order);
        listWidget_Combat_Order->setObjectName(QString::fromUtf8("listWidget_Combat_Order"));
        listWidget_Combat_Order->setGeometry(QRect(10, 30, 401, 151));
        listWidget_Combat_Order->setFocusPolicy(Qt::NoFocus);
        listWidget_Combat_Order->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        groupBox_Currently_Playing = new QGroupBox(CombatStatusWindow);
        groupBox_Currently_Playing->setObjectName(QString::fromUtf8("groupBox_Currently_Playing"));
        groupBox_Currently_Playing->setGeometry(QRect(120, 10, 201, 91));
        groupBox_Currently_Playing->setFocusPolicy(Qt::NoFocus);
        groupBox_Currently_Playing->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
" border: 2px solid black;\n"
" margin-top: 2ex;\n"
" border-radius: 5px;\n"
"color: white;\n"
"border-color: white;\n"
"}"));
        label_Currently_Playing = new QLabel(groupBox_Currently_Playing);
        label_Currently_Playing->setObjectName(QString::fromUtf8("label_Currently_Playing"));
        label_Currently_Playing->setGeometry(QRect(10, 30, 181, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_Currently_Playing->setFont(font);
        label_Currently_Playing->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}\n"
""));
        label_Currently_Playing->setAlignment(Qt::AlignCenter);
        label_Currently_Playing->setWordWrap(true);
        groupBox_Status = new QGroupBox(CombatStatusWindow);
        groupBox_Status->setObjectName(QString::fromUtf8("groupBox_Status"));
        groupBox_Status->setGeometry(QRect(10, 320, 421, 131));
        groupBox_Status->setFocusPolicy(Qt::NoFocus);
        groupBox_Status->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"font: 75 12pt \"ImperatorSmallCaps\";\n"
" border: 2px solid black;\n"
" margin-top: 2ex;\n"
" border-radius: 5px;\n"
"color: white;\n"
"border-color: white;\n"
"}"));

        retranslateUi(CombatStatusWindow);

        QMetaObject::connectSlotsByName(CombatStatusWindow);
    } // setupUi

    void retranslateUi(QDialog *CombatStatusWindow)
    {
        CombatStatusWindow->setWindowTitle(QApplication::translate("CombatStatusWindow", "Dialog", nullptr));
        groupBox_Combat_Order->setTitle(QApplication::translate("CombatStatusWindow", "Combat Order", nullptr));
        groupBox_Currently_Playing->setTitle(QApplication::translate("CombatStatusWindow", "Currently Playing", nullptr));
        label_Currently_Playing->setText(QApplication::translate("CombatStatusWindow", "Name", nullptr));
        groupBox_Status->setTitle(QApplication::translate("CombatStatusWindow", "Combatant's Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CombatStatusWindow: public Ui_CombatStatusWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBATSTATUSWINDOW_H
