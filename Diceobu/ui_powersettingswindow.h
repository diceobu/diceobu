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
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_target;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBox_Targets;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_x;
    QLineEdit *field_x;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_y;
    QLineEdit *field_y;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *PowerSettingsWindow)
    {
        if (PowerSettingsWindow->objectName().isEmpty())
            PowerSettingsWindow->setObjectName(QString::fromUtf8("PowerSettingsWindow"));
        PowerSettingsWindow->resize(478, 412);
        verticalLayout_6 = new QVBoxLayout(PowerSettingsWindow);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_target = new QLabel(PowerSettingsWindow);
        label_target->setObjectName(QString::fromUtf8("label_target"));
        label_target->setMinimumSize(QSize(50, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_target->setFont(font);

        verticalLayout_4->addWidget(label_target);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        comboBox_Targets = new QComboBox(PowerSettingsWindow);
        comboBox_Targets->setObjectName(QString::fromUtf8("comboBox_Targets"));
        comboBox_Targets->setMinimumSize(QSize(130, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font1.setBold(true);
        font1.setWeight(75);
        comboBox_Targets->setFont(font1);

        verticalLayout_2->addWidget(comboBox_Targets);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line = new QFrame(PowerSettingsWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_x = new QLabel(PowerSettingsWindow);
        label_x->setObjectName(QString::fromUtf8("label_x"));
        label_x->setMinimumSize(QSize(35, 25));
        label_x->setMaximumSize(QSize(35, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_x->setFont(font2);
        label_x->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(label_x);

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
        QFont font3;
        font3.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        field_x->setFont(font3);
        field_x->setClearButtonEnabled(false);

        horizontalLayout->addWidget(field_x);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_y = new QLabel(PowerSettingsWindow);
        label_y->setObjectName(QString::fromUtf8("label_y"));
        label_y->setMinimumSize(QSize(35, 25));
        label_y->setMaximumSize(QSize(35, 25));
        label_y->setFont(font2);
        label_y->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_2->addWidget(label_y);

        field_y = new QLineEdit(PowerSettingsWindow);
        field_y->setObjectName(QString::fromUtf8("field_y"));
        field_y->setMinimumSize(QSize(30, 25));
        field_y->setMaximumSize(QSize(30, 25));
        field_y->setFont(font3);

        horizontalLayout_2->addWidget(field_y);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_confirm = new QPushButton(PowerSettingsWindow);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(0, 35));
        pushButton_confirm->setMaximumSize(QSize(130, 100));
        pushButton_confirm->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_confirm);

        pushButton_cancel = new QPushButton(PowerSettingsWindow);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(0, 35));
        pushButton_cancel->setMaximumSize(QSize(130, 100));
        pushButton_cancel->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_cancel);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        verticalLayout_6->addLayout(verticalLayout_5);

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
