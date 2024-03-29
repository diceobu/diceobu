/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralWidget;
    QLabel *login_logo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_Username;
    QLineEdit *login_username;
    QLabel *label_Password;
    QLineEdit *login_password;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWindow->sizePolicy().hasHeightForWidth());
        LoginWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(6);
        LoginWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/d20v2.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginWindow->setWindowIcon(icon);
        LoginWindow->setWindowOpacity(1.000000000000000);
        centralWidget = new QWidget(LoginWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        login_logo = new QLabel(centralWidget);
        login_logo->setObjectName(QString::fromUtf8("login_logo"));
        login_logo->setEnabled(true);
        login_logo->setGeometry(QRect(70, 120, 800, 400));
        sizePolicy.setHeightForWidth(login_logo->sizePolicy().hasHeightForWidth());
        login_logo->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        login_logo->setFont(font1);
        login_logo->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(930, 280, 231, 152));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(8);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, 0, 12, 0);
        label_Username = new QLabel(layoutWidget);
        label_Username->setObjectName(QString::fromUtf8("label_Username"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_Username->setFont(font2);

        verticalLayout->addWidget(label_Username);

        login_username = new QLineEdit(layoutWidget);
        login_username->setObjectName(QString::fromUtf8("login_username"));
        sizePolicy.setHeightForWidth(login_username->sizePolicy().hasHeightForWidth());
        login_username->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Georgia"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        login_username->setFont(font3);
        login_username->setAutoFillBackground(false);
        login_username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 grey);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"}"));

        verticalLayout->addWidget(login_username);

        label_Password = new QLabel(layoutWidget);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));
        label_Password->setFont(font2);

        verticalLayout->addWidget(label_Password);

        login_password = new QLineEdit(layoutWidget);
        login_password->setObjectName(QString::fromUtf8("login_password"));
        sizePolicy.setHeightForWidth(login_password->sizePolicy().hasHeightForWidth());
        login_password->setSizePolicy(sizePolicy);
        login_password->setFont(font3);
        login_password->setCursor(QCursor(Qt::IBeamCursor));
        login_password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 2, stop: 0 white, stop:1 black);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"}"));
        login_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(login_password);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(920, 140, 251, 91));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 gray, stop:1 black);\n"
"font: 75 30pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(950, 440, 191, 61));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(133, 2));
        pushButton->setBaseSize(QSize(40, 152));
        QFont font4;
        font4.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font4.setPointSize(20);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(9);
        pushButton->setFont(font4);
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 grey);\n"
"font: 75 20pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 grey);\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        pushButton->setAutoDefault(true);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 640, 516, 78));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(350, 76));
        label_4->setMaximumSize(QSize(201, 16777215));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(18);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"}"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(76, 76));
        label_5->setMaximumSize(QSize(201, 16777215));
        QFont font6;
        font6.setFamily(QString::fromUtf8("ImperatorSmallCaps"));
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setWeight(75);
        label_5->setFont(font6);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(76, 76));
        pushButton_2->setMaximumSize(QSize(201, 16777215));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 grey);\n"
"font: 75 16pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 38px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 grey);\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 38px;\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(pushButton_2);

        LoginWindow->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        label_Username->setBuddy(login_password);
        label_Password->setBuddy(login_username);
#endif // QT_NO_SHORTCUT

        retranslateUi(LoginWindow);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Diceobu", nullptr));
        login_logo->setText(QApplication::translate("LoginWindow", "TextLabel", nullptr));
        label_Username->setText(QApplication::translate("LoginWindow", "Username:", nullptr));
        label_Password->setText(QApplication::translate("LoginWindow", "Password:", nullptr));
        label_3->setText(QApplication::translate("LoginWindow", "Login", nullptr));
        pushButton->setText(QApplication::translate("LoginWindow", "Go!", nullptr));
        label_4->setText(QApplication::translate("LoginWindow", "Username: admin Password: admin       \n"
"Username: test     Password: 123           ", nullptr));
        label_5->setText(QApplication::translate("LoginWindow", "OR", nullptr));
        pushButton_2->setText(QApplication::translate("LoginWindow", "Click\n"
"Me!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
