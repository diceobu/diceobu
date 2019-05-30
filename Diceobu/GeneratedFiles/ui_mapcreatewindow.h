/********************************************************************************
** Form generated from reading UI file 'mapcreatewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPCREATEWINDOW_H
#define UI_MAPCREATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MapCreateWindow
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_choose_map;
    QComboBox *comboBox_Maps_Create;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *MapCreateWindow)
    {
        if (MapCreateWindow->objectName().isEmpty())
            MapCreateWindow->setObjectName(QString::fromUtf8("MapCreateWindow"));
        MapCreateWindow->resize(202, 124);
        horizontalLayout_2 = new QHBoxLayout(MapCreateWindow);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_choose_map = new QLabel(MapCreateWindow);
        label_choose_map->setObjectName(QString::fromUtf8("label_choose_map"));
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_choose_map->setFont(font);
        label_choose_map->setLayoutDirection(Qt::LeftToRight);
        label_choose_map->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_choose_map);

        comboBox_Maps_Create = new QComboBox(MapCreateWindow);
        comboBox_Maps_Create->setObjectName(QString::fromUtf8("comboBox_Maps_Create"));
        comboBox_Maps_Create->setMinimumSize(QSize(120, 0));
        QFont font1;
        font1.setPointSize(10);
        comboBox_Maps_Create->setFont(font1);

        verticalLayout->addWidget(comboBox_Maps_Create);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_confirm = new QPushButton(MapCreateWindow);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(0, 35));
        pushButton_confirm->setMaximumSize(QSize(130, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_confirm->setFont(font2);

        horizontalLayout->addWidget(pushButton_confirm);

        pushButton_cancel = new QPushButton(MapCreateWindow);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(0, 35));
        pushButton_cancel->setMaximumSize(QSize(130, 100));
        pushButton_cancel->setFont(font2);

        horizontalLayout->addWidget(pushButton_cancel);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(MapCreateWindow);

        QMetaObject::connectSlotsByName(MapCreateWindow);
    } // setupUi

    void retranslateUi(QDialog *MapCreateWindow)
    {
        MapCreateWindow->setWindowTitle(QApplication::translate("MapCreateWindow", "Dialog", nullptr));
        label_choose_map->setText(QApplication::translate("MapCreateWindow", "Choose Map:", nullptr));
        pushButton_confirm->setText(QApplication::translate("MapCreateWindow", "Confirm", nullptr));
        pushButton_cancel->setText(QApplication::translate("MapCreateWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapCreateWindow: public Ui_MapCreateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPCREATEWINDOW_H
