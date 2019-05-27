/********************************************************************************
** Form generated from reading UI file 'movewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEWINDOW_H
#define UI_MOVEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MoveWindow
{
public:
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_spawnat;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_x;
    QLineEdit *field_x;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_y;
    QLineEdit *field_y;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *MoveWindow)
    {
        if (MoveWindow->objectName().isEmpty())
            MoveWindow->setObjectName(QString::fromUtf8("MoveWindow"));
        MoveWindow->resize(250, 131);
        horizontalLayout_6 = new QHBoxLayout(MoveWindow);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(17, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_spawnat = new QLabel(MoveWindow);
        label_spawnat->setObjectName(QString::fromUtf8("label_spawnat"));
        QFont font;
        font.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_spawnat->setFont(font);

        horizontalLayout_4->addWidget(label_spawnat);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_x = new QLabel(MoveWindow);
        label_x->setObjectName(QString::fromUtf8("label_x"));
        label_x->setMinimumSize(QSize(35, 25));
        label_x->setMaximumSize(QSize(35, 16777215));
        label_x->setFont(font);
        label_x->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_2->addWidget(label_x);

        field_x = new QLineEdit(MoveWindow);
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        field_x->setFont(font1);
        field_x->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(field_x);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_y = new QLabel(MoveWindow);
        label_y->setObjectName(QString::fromUtf8("label_y"));
        label_y->setMinimumSize(QSize(35, 25));
        label_y->setMaximumSize(QSize(35, 25));
        label_y->setFont(font);
        label_y->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_3->addWidget(label_y);

        field_y = new QLineEdit(MoveWindow);
        field_y->setObjectName(QString::fromUtf8("field_y"));
        field_y->setMinimumSize(QSize(30, 25));
        field_y->setMaximumSize(QSize(30, 25));
        field_y->setFont(font1);

        horizontalLayout_3->addWidget(field_y);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_confirm = new QPushButton(MoveWindow);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(0, 35));
        pushButton_confirm->setMaximumSize(QSize(130, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_confirm->setFont(font2);

        horizontalLayout->addWidget(pushButton_confirm);

        pushButton_cancel = new QPushButton(MoveWindow);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(0, 35));
        pushButton_cancel->setMaximumSize(QSize(130, 100));
        pushButton_cancel->setFont(font2);

        horizontalLayout->addWidget(pushButton_cancel);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

#ifndef QT_NO_SHORTCUT
        label_x->setBuddy(field_y);
        label_y->setBuddy(field_x);
#endif // QT_NO_SHORTCUT

        retranslateUi(MoveWindow);

        QMetaObject::connectSlotsByName(MoveWindow);
    } // setupUi

    void retranslateUi(QDialog *MoveWindow)
    {
        MoveWindow->setWindowTitle(QApplication::translate("MoveWindow", "Dialog", nullptr));
        label_spawnat->setText(QApplication::translate("MoveWindow", "Move to:", nullptr));
        label_x->setText(QApplication::translate("MoveWindow", "X :", nullptr));
        label_y->setText(QApplication::translate("MoveWindow", "Y :", nullptr));
        pushButton_confirm->setText(QApplication::translate("MoveWindow", "Confirm", nullptr));
        pushButton_cancel->setText(QApplication::translate("MoveWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoveWindow: public Ui_MoveWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEWINDOW_H
