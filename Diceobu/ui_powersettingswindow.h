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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PowerSettingsWindow
{
public:
    QHBoxLayout *horizontalLayout_6;
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
        PowerSettingsWindow->resize(202, 230);
        horizontalLayout_6 = new QHBoxLayout(PowerSettingsWindow);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_target = new QLabel(PowerSettingsWindow);
        label_target->setObjectName(QString::fromUtf8("label_target"));
        label_target->setMinimumSize(QSize(50, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_target->setFont(font);

        verticalLayout_2->addWidget(label_target);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        comboBox_Targets = new QComboBox(PowerSettingsWindow);
        comboBox_Targets->setObjectName(QString::fromUtf8("comboBox_Targets"));
        comboBox_Targets->setMinimumSize(QSize(130, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font1.setBold(true);
        font1.setWeight(75);
        comboBox_Targets->setFont(font1);

        verticalLayout->addWidget(comboBox_Targets);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line = new QFrame(PowerSettingsWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(68, 20));
        line->setMaximumSize(QSize(100, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        label = new QLabel(PowerSettingsWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(30, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        line_2 = new QFrame(PowerSettingsWindow);
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
        label_x = new QLabel(PowerSettingsWindow);
        label_x->setObjectName(QString::fromUtf8("label_x"));
        label_x->setMinimumSize(QSize(35, 25));
        label_x->setMaximumSize(QSize(35, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_x->setFont(font3);
        label_x->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_2->addWidget(label_x);

        field_x = new QLineEdit(PowerSettingsWindow);
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
        QFont font4;
        font4.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        field_x->setFont(font4);
        field_x->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(field_x);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_y = new QLabel(PowerSettingsWindow);
        label_y->setObjectName(QString::fromUtf8("label_y"));
        label_y->setMinimumSize(QSize(35, 25));
        label_y->setMaximumSize(QSize(35, 25));
        label_y->setFont(font3);
        label_y->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_3->addWidget(label_y);

        field_y = new QLineEdit(PowerSettingsWindow);
        field_y->setObjectName(QString::fromUtf8("field_y"));
        field_y->setMinimumSize(QSize(30, 25));
        field_y->setMaximumSize(QSize(30, 25));
        field_y->setFont(font4);

        horizontalLayout_3->addWidget(field_y);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_confirm = new QPushButton(PowerSettingsWindow);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(0, 35));
        pushButton_confirm->setMaximumSize(QSize(130, 100));
        pushButton_confirm->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_confirm);

        pushButton_cancel = new QPushButton(PowerSettingsWindow);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(0, 35));
        pushButton_cancel->setMaximumSize(QSize(130, 100));
        pushButton_cancel->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_6->addLayout(verticalLayout_2);

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
