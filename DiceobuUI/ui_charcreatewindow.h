/********************************************************************************
** Form generated from reading UI file 'charcreatewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARCREATEWINDOW_H
#define UI_CHARCREATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CharCreateWindow
{
public:
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_name;
    QLineEdit *field_name;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_class;
    QComboBox *field_class;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_gender;
    QComboBox *field_gender;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_race;
    QComboBox *field_race;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labeL_alignment;
    QComboBox *field_alignment;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_background;
    QComboBox *field_background;
    QHBoxLayout *horizontalLayout;
    QLabel *label_balance;
    QLineEdit *field_balance;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_level;
    QLineEdit *field_level;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_spawnat;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_x;
    QLineEdit *field_x;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_y;
    QLineEdit *field_y;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *CharCreateWindow)
    {
        if (CharCreateWindow->objectName().isEmpty())
            CharCreateWindow->setObjectName(QString::fromUtf8("CharCreateWindow"));
        CharCreateWindow->resize(610, 574);
        horizontalLayout_13 = new QHBoxLayout(CharCreateWindow);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_name = new QLabel(CharCreateWindow);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_name->setFont(font);

        horizontalLayout_10->addWidget(label_name);

        field_name = new QLineEdit(CharCreateWindow);
        field_name->setObjectName(QString::fromUtf8("field_name"));
        field_name->setMinimumSize(QSize(130, 25));
        field_name->setMaximumSize(QSize(130, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        field_name->setFont(font1);

        horizontalLayout_10->addWidget(field_name);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_class = new QLabel(CharCreateWindow);
        label_class->setObjectName(QString::fromUtf8("label_class"));
        label_class->setFont(font);

        horizontalLayout_6->addWidget(label_class);

        field_class = new QComboBox(CharCreateWindow);
        field_class->setObjectName(QString::fromUtf8("field_class"));
        field_class->setMinimumSize(QSize(145, 25));
        field_class->setMaximumSize(QSize(145, 25));
        field_class->setFont(font1);
        field_class->setLayoutDirection(Qt::LeftToRight);
        field_class->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole);\n"
"}"));

        horizontalLayout_6->addWidget(field_class);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_gender = new QLabel(CharCreateWindow);
        label_gender->setObjectName(QString::fromUtf8("label_gender"));
        label_gender->setFont(font);

        horizontalLayout_12->addWidget(label_gender);

        field_gender = new QComboBox(CharCreateWindow);
        field_gender->setObjectName(QString::fromUtf8("field_gender"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(field_gender->sizePolicy().hasHeightForWidth());
        field_gender->setSizePolicy(sizePolicy);
        field_gender->setMinimumSize(QSize(145, 25));
        field_gender->setMaximumSize(QSize(145, 25));
        field_gender->setBaseSize(QSize(40, 0));
        field_gender->setFont(font1);
        field_gender->setLayoutDirection(Qt::LeftToRight);
        field_gender->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole);\n"
"}"));
        field_gender->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout_12->addWidget(field_gender);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_race = new QLabel(CharCreateWindow);
        label_race->setObjectName(QString::fromUtf8("label_race"));
        label_race->setFont(font);

        horizontalLayout_5->addWidget(label_race);

        field_race = new QComboBox(CharCreateWindow);
        field_race->setObjectName(QString::fromUtf8("field_race"));
        sizePolicy.setHeightForWidth(field_race->sizePolicy().hasHeightForWidth());
        field_race->setSizePolicy(sizePolicy);
        field_race->setMinimumSize(QSize(145, 25));
        field_race->setMaximumSize(QSize(145, 25));
        field_race->setBaseSize(QSize(40, 0));
        field_race->setFont(font1);
        field_race->setLayoutDirection(Qt::LeftToRight);
        field_race->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole);\n"
"}"));
        field_race->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout_5->addWidget(field_race);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labeL_alignment = new QLabel(CharCreateWindow);
        labeL_alignment->setObjectName(QString::fromUtf8("labeL_alignment"));
        labeL_alignment->setFont(font);

        horizontalLayout_4->addWidget(labeL_alignment);

        field_alignment = new QComboBox(CharCreateWindow);
        field_alignment->setObjectName(QString::fromUtf8("field_alignment"));
        field_alignment->setMinimumSize(QSize(145, 25));
        field_alignment->setMaximumSize(QSize(145, 25));
        field_alignment->setFont(font1);
        field_alignment->setLayoutDirection(Qt::LeftToRight);
        field_alignment->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole);\n"
"}"));

        horizontalLayout_4->addWidget(field_alignment);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_background = new QLabel(CharCreateWindow);
        label_background->setObjectName(QString::fromUtf8("label_background"));
        label_background->setFont(font);

        horizontalLayout_3->addWidget(label_background);

        field_background = new QComboBox(CharCreateWindow);
        field_background->setObjectName(QString::fromUtf8("field_background"));
        field_background->setMinimumSize(QSize(145, 25));
        field_background->setMaximumSize(QSize(145, 25));
        field_background->setFont(font1);
        field_background->setLayoutDirection(Qt::LeftToRight);
        field_background->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole);\n"
"}"));

        horizontalLayout_3->addWidget(field_background);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_balance = new QLabel(CharCreateWindow);
        label_balance->setObjectName(QString::fromUtf8("label_balance"));
        label_balance->setFont(font);

        horizontalLayout->addWidget(label_balance);

        field_balance = new QLineEdit(CharCreateWindow);
        field_balance->setObjectName(QString::fromUtf8("field_balance"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(field_balance->sizePolicy().hasHeightForWidth());
        field_balance->setSizePolicy(sizePolicy1);
        field_balance->setMinimumSize(QSize(130, 25));
        field_balance->setMaximumSize(QSize(130, 25));
        field_balance->setFont(font1);

        horizontalLayout->addWidget(field_balance);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_level = new QLabel(CharCreateWindow);
        label_level->setObjectName(QString::fromUtf8("label_level"));
        label_level->setFont(font);
        label_level->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_level);

        field_level = new QLineEdit(CharCreateWindow);
        field_level->setObjectName(QString::fromUtf8("field_level"));
        sizePolicy1.setHeightForWidth(field_level->sizePolicy().hasHeightForWidth());
        field_level->setSizePolicy(sizePolicy1);
        field_level->setMinimumSize(QSize(130, 25));
        field_level->setMaximumSize(QSize(130, 25));
        field_level->setFont(font1);

        horizontalLayout_2->addWidget(field_level);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_spawnat = new QLabel(CharCreateWindow);
        label_spawnat->setObjectName(QString::fromUtf8("label_spawnat"));
        label_spawnat->setFont(font);

        verticalLayout->addWidget(label_spawnat);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_x = new QLabel(CharCreateWindow);
        label_x->setObjectName(QString::fromUtf8("label_x"));
        label_x->setMinimumSize(QSize(25, 0));
        label_x->setFont(font);
        label_x->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_7->addWidget(label_x);

        field_x = new QLineEdit(CharCreateWindow);
        field_x->setObjectName(QString::fromUtf8("field_x"));
        field_x->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(field_x->sizePolicy().hasHeightForWidth());
        field_x->setSizePolicy(sizePolicy2);
        field_x->setMinimumSize(QSize(30, 25));
        field_x->setMaximumSize(QSize(30, 25));
        field_x->setBaseSize(QSize(40, 0));
        field_x->setFont(font1);
        field_x->setClearButtonEnabled(false);

        horizontalLayout_7->addWidget(field_x);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_y = new QLabel(CharCreateWindow);
        label_y->setObjectName(QString::fromUtf8("label_y"));
        label_y->setMinimumSize(QSize(25, 0));
        label_y->setMaximumSize(QSize(17, 25));
        label_y->setFont(font);
        label_y->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_8->addWidget(label_y);

        field_y = new QLineEdit(CharCreateWindow);
        field_y->setObjectName(QString::fromUtf8("field_y"));
        field_y->setMaximumSize(QSize(30, 25));
        field_y->setFont(font1);

        horizontalLayout_8->addWidget(field_y);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_confirm = new QPushButton(CharCreateWindow);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(0, 35));
        pushButton_confirm->setMaximumSize(QSize(130, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_confirm->setFont(font2);

        horizontalLayout_11->addWidget(pushButton_confirm);

        pushButton_cancel = new QPushButton(CharCreateWindow);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(0, 35));
        pushButton_cancel->setMaximumSize(QSize(130, 100));
        pushButton_cancel->setFont(font2);

        horizontalLayout_11->addWidget(pushButton_cancel);


        verticalLayout_2->addLayout(horizontalLayout_11);


        horizontalLayout_13->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

#ifndef QT_NO_SHORTCUT
        label_name->setBuddy(field_name);
        label_class->setBuddy(field_class);
        label_gender->setBuddy(field_race);
        label_race->setBuddy(field_race);
        labeL_alignment->setBuddy(field_alignment);
        label_background->setBuddy(field_background);
        label_balance->setBuddy(field_balance);
        label_level->setBuddy(field_level);
        label_x->setBuddy(field_y);
        label_y->setBuddy(field_x);
#endif // QT_NO_SHORTCUT

        retranslateUi(CharCreateWindow);

        QMetaObject::connectSlotsByName(CharCreateWindow);
    } // setupUi

    void retranslateUi(QDialog *CharCreateWindow)
    {
        CharCreateWindow->setWindowTitle(QApplication::translate("CharCreateWindow", "Dialog", nullptr));
        label_name->setText(QApplication::translate("CharCreateWindow", "Name :", nullptr));
        label_class->setText(QApplication::translate("CharCreateWindow", "Class :", nullptr));
        label_gender->setText(QApplication::translate("CharCreateWindow", "Gender:", nullptr));
        label_race->setText(QApplication::translate("CharCreateWindow", "Race :", nullptr));
        labeL_alignment->setText(QApplication::translate("CharCreateWindow", "Alignment :", nullptr));
        label_background->setText(QApplication::translate("CharCreateWindow", "Background :", nullptr));
        label_balance->setText(QApplication::translate("CharCreateWindow", "Balance :", nullptr));
        label_level->setText(QApplication::translate("CharCreateWindow", "Level :", nullptr));
        field_level->setPlaceholderText(QApplication::translate("CharCreateWindow", "1", nullptr));
        label_spawnat->setText(QApplication::translate("CharCreateWindow", "Spawn at :", nullptr));
        label_x->setText(QApplication::translate("CharCreateWindow", "X :", nullptr));
        field_x->setPlaceholderText(QApplication::translate("CharCreateWindow", "25", nullptr));
        label_y->setText(QApplication::translate("CharCreateWindow", "Y :", nullptr));
        pushButton_confirm->setText(QApplication::translate("CharCreateWindow", "Confirm", nullptr));
        pushButton_cancel->setText(QApplication::translate("CharCreateWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharCreateWindow: public Ui_CharCreateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARCREATEWINDOW_H
