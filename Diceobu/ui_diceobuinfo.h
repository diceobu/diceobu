/********************************************************************************
** Form generated from reading UI file 'diceobuinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICEOBUINFO_H
#define UI_DICEOBUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiceobuInfo
{
public:
    QTabWidget *tabWidget;
    QWidget *Tab_Game;
    QTextBrowser *textBrowser_Description;
    QWidget *tab_2;
    QTextBrowser *textBrowser_Description_2;

    void setupUi(QDialog *DiceobuInfo)
    {
        if (DiceobuInfo->objectName().isEmpty())
            DiceobuInfo->setObjectName(QString::fromUtf8("DiceobuInfo"));
        DiceobuInfo->resize(469, 399);
        tabWidget = new QTabWidget(DiceobuInfo);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 461, 401));
        Tab_Game = new QWidget();
        Tab_Game->setObjectName(QString::fromUtf8("Tab_Game"));
        textBrowser_Description = new QTextBrowser(Tab_Game);
        textBrowser_Description->setObjectName(QString::fromUtf8("textBrowser_Description"));
        textBrowser_Description->setGeometry(QRect(0, 0, 451, 371));
        textBrowser_Description->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 gray, stop:1 gray);\n"
"font: 75 16pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}"));
        tabWidget->addTab(Tab_Game, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textBrowser_Description_2 = new QTextBrowser(tab_2);
        textBrowser_Description_2->setObjectName(QString::fromUtf8("textBrowser_Description_2"));
        textBrowser_Description_2->setGeometry(QRect(0, 0, 451, 371));
        textBrowser_Description_2->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 gray, stop:1 gray);\n"
"font: 75 16pt \"ImperatorSmallCaps\";\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(DiceobuInfo);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DiceobuInfo);
    } // setupUi

    void retranslateUi(QDialog *DiceobuInfo)
    {
        DiceobuInfo->setWindowTitle(QApplication::translate("DiceobuInfo", "Dialog", nullptr));
        textBrowser_Description->setHtml(QApplication::translate("DiceobuInfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'ImperatorSmallCaps'; font-size:16pt; font-weight:72; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'ImperatorSmallCaps,serif';\">T</span><span style=\" font-family:'Cambria,serif';\">\316\277</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\317\200\316\261\316\271\317\207\316\275\316\257\316\264\316\271</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\316\265\317\200\316\271\316\272\316\265\316\275\317\204\317\201\317\216\316\275\316\265\317\204\316\261\316\271</span><span style=\" font-"
                        "family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\316\263\317\215\317\201\317\211</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\316\261\317\200\317\214</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\317\203\317\204\316\271\316\263\316\274\316\271\317\214\317\204\317\205\317\200\316\261</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> (instances) </span><span style=\" font-family:'Cambria,serif';\">\317\207\316\261\317\201\317\204\317\216\316\275</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\316\272\316\261\316\271</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\317\200\316\261\316\271\317\207\317\204\317\216\316\275</span><span style=\" font-family:'ImperatorSmallCaps,serif'"
                        ";\">.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'ImperatorSmallCaps,serif';\">\302\240</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\232\316\261\317\204\316\261</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\317\204\316\267\316\275</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\316\255\316\275\316\261\317\201\316\276\316\267</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\317\204\316\277\317\205</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\317\200\316\261\316\271\317\207"
                        "\316\275\316\271\316\264\316\271\316\277\317\215</span><span style=\" font-family:'ImperatorSmallCaps,serif';\">, </span><span style=\" font-family:'Cambria,serif';\">\317\200\317\201\316\255\317\200\316\265\316\271</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\316\275\316\261</span><span style=\" font-family:'ImperatorSmallCaps,serif';\"> </span><span style=\" font-family:'Cambria,serif';\">\316\264\316\267\316\274\316\271\316\277\317\205\317\201\316\263\316\267\316\270\316\277\317\215\316\275 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\255\316\275\316\261\317\202 \316\267 \317\200\316\265\317\201\316\271\317\203\317\203\317\214\317\204\316\265\317\201\316\277\316\271 \317\207\316\254\317\201\317\204\316\265\317\202. \316\240\316\254\316\275\317\211 \317\203\316\265 \316\261\317\205\317\204\316\277"
                        "\317\215\317\202, \316\264\316\267\316\274\316\271\316\277\317\205\317\201\316\263\316\277\317\215\316\275\317\204\316\261\316\271 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\265\317\202 (\316\265\316\257\317\204\316\265 \316\261\317\200\317\214 \317\204\316\267\316\275 \316\261\317\201\317\207\316\256, \316\265\316\257\317\204\316\265 \316\261\317\200\317\214 savefile) \316\277\316\271 \316\277\317\200\316\277\316\257\316\277\316\271 \316\272\316\271\316\275\316\277\317\215\316\275\317\204\316\261\316\271 \316\265\316\273\316\265\317\205\316\270\316\255\317\201\316\261 (\317\214\317\200\316\277\317\205 \316\265\317\200\316\271\317\204\317\201\316\255\317\200\316\265\317\204\316\261\316\271). \316\221\316\275\316\254 \317\200\316\254\317\203\316\261 \317\203\317\204\316\271\316\263\316\274\316\256, \316\274\317\200\316\277\317\201\316\265\316\257 \316\275\316\261 \316\265\316\272\316\272\316\271\316\275\316\267\316\270\316\265\316\257 \316\267 \316\273\316\265\316\271\317\204\316\277\317"
                        "\205\317\201\316\263\316\265\316\257\316\261 \316\274\316\254\317\207\316\267\317\202 \316\272\316\261\317\204\316\254 \317\204\316\267\316\275 \316\277\317\200\316\277\316\257\316\261 \316\277\316\271 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\265\317\202 \317\204\316\277\317\205 \317\204\317\201\316\255\317\207\316\277\316\275\317\204\316\277\317\202 \316\247\316\254\317\201\317\204\316\267 \317\200\316\261\316\257\317\201\316\275\316\277\317\205\316\275 \316\263\317\215\317\201\316\277\317\205\317\202 \317\207\317\204\317\205\317\200\317\216\316\275\317\204\316\261\317\202 \316\277 \316\255\316\275\316\261\317\202 \317\204\316\277\316\275 \316\254\316\273\316\273\316\277, \316\255\317\211\317\202 \317\214\317\204\316\277\317\205 \316\277 \316\247\317\201\316\256\317\203\317\204\316\267\317\202 \317\204\316\265\317\201\316\274\316\261\317\204\316\257\317\203\316\265\316\271 \317\204\316\267\316\275 \316\274\316\254\317\207\316\267. \316\227 \317\203\316\265\316\271\317\201\316\254 \317"
                        "\204\317\211\316\275 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\317\211\316\275 \316\264\316\267\316\274\316\271\316\277\317\205\317\201\316\263\316\265\316\257\317\204\316\261\316\271 \317\204\317\205\317\207\316\261\316\257\316\261 \317\203\317\204\316\267\316\275 \316\261\317\201\317\207\316\256 \317\204\316\267\317\202 \316\272\316\254\316\270\316\265 \316\274\316\254\317\207\316\267\317\202.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\232\316\261\317\204\316\254 \317\204\316\267\316\275 \316\273\316\265\316\271\317\204\316\277\317\205\317\201\316\263\316\265\316\257\316\261 \316\274\316\254\317\207\316\267\317\202 \316\267 \316\277\316\270\317\214\316\275\316\267 \316\265\316\257\316\275\316\261\316\271 \316\272\316\273\316\265\316\271\316\264\317\211\316\274\316\255\316\275\316\267 \317\203\317\204\316\277\316\275 \316\247\316\254\317\201\317"
                        "\204\316\267 \317\203\317\204\316\277\316\275 \316\277\317\200\316\277\316\257\316\277 \317\203\317\205\316\274\316\262\316\261\316\257\316\275\316\265\316\271 \316\267 \316\274\316\254\317\207\316\267, \316\272\316\261\316\271 \317\203\317\204\316\277\316\275 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261 \317\204\316\277\317\205 \316\277\317\200\316\277\316\257\316\277\317\205 \316\265\316\257\316\275\316\261\316\271 \316\267 \317\203\316\265\316\271\317\201\316\254 (\316\261\316\273\316\273\316\254\316\266\316\277\316\275\317\204\316\261\317\202 \317\214\317\203\316\277 \317\200\317\201\316\277\317\207\317\211\317\201\316\254\316\265\316\271 \316\267 \316\274\316\254\317\207\316\267) \316\272\316\261\316\271 \316\277 \316\247\317\201\316\256\317\203\317\204\316\267\317\202 \316\264\316\265\316\275 \316\274\317\200\316\277\317\201\316\265\316\257 \316\275\316\261 \316\264\316\267\316\274\316\271\316\277\317\205\317\201\316\263\316\256\317\203\316\265\316\271, \316\264\316\271\316\261"
                        "\316\263\317\201\316\254\317\210\316\265\316\271 \316\256 \316\261\316\273\316\273\316\254\316\276\316\265\316\271 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\265\317\202 \316\256 \316\247\316\254\317\201\317\204\316\265\317\202.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\302\240</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\302\240</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\232\316\261\317\204\316\254 \317\204\316\267\316\275 \316\272\316\261\316\275\316\277\316\275\316\271\316\272\316\256 \316\273\316\265\316\271\317\204\316\277\317\205\317\201\316\263\316\265\316"
                        "\257\316\261 \317\204\316\261 \317\200\316\261\317\201\316\261\317\200\316\254\316\275\317\211 \316\263\316\257\316\275\316\277\316\275\317\204\316\261\316\271 \316\265\316\273\316\265\317\215\316\270\316\265\317\201\316\261. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">O\316\271 \316\247\316\254\317\201\317\204\316\265\317\202 \316\272\316\261\316\271 \316\277\316\271 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\265\317\202 \316\265\316\272\317\204\317\205\317\200\317\216\316\275\316\277\316\275\317\204\316\261\316\271 \316\274\316\265 \317\204\316\267\316\275 \316\274\316\277\317\201\317\206\316\256 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\342\200\234 &lt;Map/Character ID&gt; : &lt;Map/Character Name&gt; "
                        "\342\200\234 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\317\214\317\200\316\277\317\205 ID \317\204\316\277 \316\274\316\277\316\275\316\261\316\264\316\271\316\272\317\214 ID \317\204\316\277\317\205 \316\272\316\254\316\270\316\265 \316\247\316\254\317\201\317\204\316\267 / \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261 \316\263\316\271\316\261 \317\204\316\267\316\275 \317\204\317\201\316\255\317\207\316\277\317\205\317\203\316\261 \317\203\317\205\316\275\316\265\316\264\317\201\316\257\316\261.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\302\240</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fon"
                        "t-family:'Cambria,serif';\">\316\223\316\271\316\261 \316\273\316\265\317\200\317\204\316\277\316\274\316\255\317\201\316\265\316\271\316\265\317\202 \317\214\317\203\316\277\316\275 \316\261\317\206\316\277\317\201\316\254 \317\204\316\261 \317\200\316\261\317\201\316\261\317\200\316\254\316\275\317\211, \316\264\316\265\316\257\317\204\316\265 \317\204\316\267\316\275 \316\272\316\261\317\201\317\204\316\255\316\273\316\261 \342\200\234Interface\342\200\235.</span> </p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Tab_Game), QApplication::translate("DiceobuInfo", "General Game", nullptr));
        textBrowser_Description_2->setHtml(QApplication::translate("DiceobuInfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'ImperatorSmallCaps'; font-size:16pt; font-weight:72; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\234\316\265\317\204\316\254 \317\204\316\267\316\275 \316\277\316\270\317\214\316\275\316\267 Login \317\204\316\277 \317\200\316\261\316\271\317\207\316\275\316\257\316\264\316\271 \316\276\316\265\316\272\316\271\316\275\316\254\316\265\316\271 \317\203\317\204\316\277 \317\200\316\261\317\201\316\254\316\270\317\205\317\201\316\277 Lobby.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-fam"
                        "ily:'Cambria,serif';\">\316\243\317\204\316\261 \316\261\317\201\316\271\317\203\317\204\316\265\317\201\316\254, \317\204\316\277 \317\200\316\265\316\264\316\257\316\277 Game Map \316\265\316\257\316\275\316\261\316\271 \316\267 \316\261\317\200\316\277\317\204\317\215\317\200\317\211\317\203\316\267 \317\204\316\277\317\205 50x50 \316\247\316\254\317\201\317\204\316\267 \317\204\316\277\317\205 \317\200\316\261\316\271\317\207\316\275\316\271\316\264\316\271\316\277\317\215. \316\244\316\277 \316\272\316\277\317\205\316\274\317\200\316\257 Grid (\316\272\316\254\317\204\317\211 \316\261\317\201\316\271\317\203\317\204\316\265\317\201\316\254) \316\272\316\254\316\275\316\265\316\271 toggle \316\274\316\265\317\204\316\261\316\276\317\215 \317\204\316\267\317\202 \316\265\316\274\317\206\316\254\316\275\316\271\317\203\316\267\317\202 \316\265\316\275\317\214\317\202 \316\264\316\271\316\272\317\204\317\215\316\277\317\205 \317\200\316\254\316\275\317\211 \317\203\317\204\316\277 \317\207\316\254\317\201\317"
                        "\204\316\267.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\243\317\204\316\261 \316\264\316\265\316\276\316\271\316\254, \316\272\316\254\317\204\317\211 \316\261\317\200\317\214 \317\204\316\261 \317\200\316\265\316\264\316\257\316\261 Current Map \316\272\316\261\316\271 Current Character </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\265\316\274\317\206\316\261\316\275\316\257\316\266\316\265\317\204\316\261\316\271 \316\277 \316\247\316\254\317\201\317\204\316\267\317\202 \316\272\316\261\316\271 \316\277 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261\317\202 (\316\261\316\275\317\204\316\257\317\203\317\204\316\277\316\271\317\207\316\261) \317\203\317\204\316\277\316\275 \316\277\317\200\316\277\316"
                        "\257\316\277 \316\265\316\257\316\274\316\261\317\203\317\204\316\265 \316\265\317\200\316\271\316\272\316\265\316\275\317\204\317\201\317\211\316\274\316\255\316\275\316\277\316\271 \316\261\316\275\316\254 \317\203\317\204\316\271\316\263\316\274\316\256. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\225\317\200\316\271\316\273\316\255\316\263\316\277\316\275\317\204\316\261\317\202 File &gt; New &gt; Map (\316\256 \317\200\316\271\316\255\316\266\316\277\316\275\317\204\316\261\317\202 \316\234 \317\203\317\204\316\277 \317\200\316\273\316\267\316\272\317\204\317\201\316\277\316\273\317\214\316\263\316\271\316\277) \316\265\316\274\317\206\316\261\316\275\316\257\316\266\316\265\317\204\316\261\316\271 \316\255\316\275\316\261 \317\200\316\261\317\201\316\254\316\270\317\205\317\201\316\277 \316\274\316\265 \316\255\316\275\316\261 drop-down menu \317\200\317\201\316"
                        "\277\317\203\317\206\316\255\317\201\316\277\316\275\317\204\316\261\317\202 \317\204\316\267\316\275 \316\265\317\200\316\271\316\273\316\277\316\263\316\256 \316\274\316\265\317\204\316\261\316\276\317\215 \317\204\317\211\316\275 \317\200\317\201\316\277-\316\265\317\204\316\277\316\271\316\274\316\261\317\203\316\274\316\255\316\275\317\211\316\275 \317\207\316\261\317\201\317\204\317\216\316\275 \317\204\316\277\317\205 \317\200\316\261\316\271\317\207\316\275\316\271\316\264\316\271\316\277\317\215.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\302\240</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\225\317\200\316\271\316\273\316\255\316\263\316\277\316\275\317\204\316\261\317\202 File &gt; New &gt; Character (\316\256 \317\200"
                        "\316\271\316\255\316\266\316\277\316\275\317\204\316\261\317\202 C \317\203\317\204\316\277 \317\200\316\273\316\267\316\272\317\204\317\201\316\277\316\273\317\214\316\263\316\271\316\277) \316\265\316\274\317\206\316\261\316\275\316\257\316\266\316\265\317\204\316\261\316\271 \316\255\316\275\316\261 \317\200\316\261\317\201\316\254\316\270\317\205\317\201\316\277 \316\264\316\267\316\274\316\271\316\277\317\205\317\201\316\263\316\257\316\261\317\202 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">(\316\274\316\265 \317\200\317\201\316\277-\317\203\317\205\316\274\317\200\316\273\316\267\317\201\317\211\316\274\316\255\316\275\316\261 \317\204\316\261 \317\200\316\265\316\264\316\257\316\261 \316\263\316\271\316\261 \316\273\317\214\316\263\316\277\317\205\317\202 \317\204\316\261\317\207\317\215\317\204"
                        "\316\267\317\204\316\261\317\202) \317\203\317\204\316\277 \316\277\317\200\316\277\316\257\316\277 \316\277 \317\207\317\201\316\256\317\203\317\204\316\267\317\202 \316\274\317\200\316\277\317\201\316\265\316\257 \316\275\316\261 \316\265\316\271\317\203\316\254\316\263\316\265\316\271 \317\204\316\271\317\202 \317\200\317\201\316\277\317\203\317\211\317\200\316\271\316\272\316\255\317\202 \317\204\316\277\317\205 \317\201\317\205\316\270\316\274\316\257\317\203\316\265\316\271\317\202 \316\272\316\261\316\271 \316\275\316\261 \316\265\317\200\316\271\316\262\316\265\316\262\316\261\316\271\317\216\317\203\316\265\316\271 (\316\265\317\200\316\271\316\273\316\255\316\263\316\277\316\275\317\204\316\261\317\202 Confirm) \316\256 \316\275\316\261 \316\261\316\272\317\205\317\201\317\216\317\203\316\265\316\271 (\316\265\317\200\316\271\316\273\316\255\316\263\316\277\316\275\317\204\316\261\317\202 Cancel) \317\204\316\267\316\275 \316\264\316\267\316\274\316\271\316\277\317\205\317\201\316\263\316\257\316\261"
                        " \317\204\316\277\317\205 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\302\240</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\225\316\275\316\261\316\273\316\273\316\261\316\272\317\204\316\271\316\272\316\254, \316\265\317\200\316\271\316\273\316\255\316\263\316\277\316\275\317\204\316\261\317\202 File &gt; Load &gt; Character (\316\256 \317\200\316\271\316\255\316\266\316\277\316\275\317\204\316\261\317\202 L)</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\317\206\316\277\317\201\317\204\317\216\316\275\316\265\317\204\316"
                        "\261\316\271 \316\255\316\275\316\261\317\202 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261\317\202 \316\261\317\200\317\214 \316\255\316\275\316\261 .pc (player character) \316\261\317\201\317\207\316\265\316\257\316\277.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\225\317\200\316\271\316\273\316\255\316\263\316\277\316\275\317\204\316\261\317\202 File &gt; Save &gt; Character (\316\256 \317\200\316\271\316\255\316\266\316\277\316\275\317\204\316\261\317\202 J) \316\263\317\201\316\254\317\206\316\265\317\204\316\261\316\271 \316\277 \317\204\317\201\316\255\317\207\316\277\316\275 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261\317\202 \317\203\317\204\316\277 \316\261\317\201\317\207\316\265\316\257\316\277 &lt;\317\214\316\275\316\277\316\274\316\261 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201"
                        "\316\261&gt;.pc \317\204\316\277 \316\277\317\200\316\277\316\257\316\277 \316\274\317\200\316\277\317\201\316\265\316\257 \316\261\317\201\316\263\317\214\317\204\316\265\317\201\316\261 \316\275\316\261 \317\206\316\277\317\201\317\204\317\211\316\270\316\265\316\257 \317\214\317\200\317\211\317\202 \316\261\316\275\316\261\316\263\317\201\316\254\317\206\316\265\317\204\316\261\316\271 \317\200\316\261\317\201\316\261\317\200\316\254\316\275\317\211. (\316\240\317\201\316\277\317\203\316\277\317\207\316\256: \316\244\316\277 \317\200\316\261\316\271\317\207\316\275\316\257\316\264\316\271 \317\207\317\201\316\267\317\203\316\271\316\274\316\277\317\200\316\277\316\271\316\265\316\257 ID \316\263\316\271\316\261 identification \317\204\317\211\316\275 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201\317\211\316\275, \316\272\316\261\316\271 \317\214\317\207\316\271 \316\277\316\275\317\214\316\274\316\261\317\204\316\261. \316\243\317\205\316\275\316\265\317\200\317\216\317\202, \316\261\316\275"
                        " \316\272\316\261\316\271 \316\264\317\215\316\277 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\265\317\202 \316\274\317\200\316\277\317\201\316\277\317\215\316\275 \316\275\316\261 \316\255\317\207\316\277\317\205\316\275 \317\204\316\277 \316\257\316\264\316\271\316\277 \317\214\316\275\316\277\316\274\316\261 \317\203\316\265 \316\274\316\257\316\261 \317\203\317\205\316\275\316\265\316\264\317\201\316\257\316\261 \317\204\316\277\317\205 \317\200\316\261\316\271\317\207\316\275\316\271\316\264\316\271\316\277\317\215 (\316\274\316\265 \316\264\316\271\316\261\317\206\316\277\317\201\316\265\317\204\316\271\316\272\316\254 IDs), \316\272\316\261\317\204\316\254 \317\204\316\277 Save Character \316\277 \316\255\316\275\316\261\317\202 \316\270\316\261 \316\272\316\254\316\275\316\265\316\271 overwrite \317\204\316\277 savefile \317\204\316\277\317\205 \316\254\316\273\316\273\316\277\317\205. \316\223\316\271\316\261 \316\261\317\205\317\204\317\214, \316\264\316\265\316\275 \317\203\317"
                        "\205\316\275\316\271\317\203\317\204\317\216\316\275\317\204\316\261\316\271 \317\214\316\274\316\277\316\271\316\261 \316\277\316\275\317\214\316\274\316\261\317\204\316\261.)</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\302\240</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\225\317\206\317\214\317\203\316\277\316\275 \316\255\316\275\316\261\317\202 \317\204\316\277\317\205\316\273\316\254\317\207\316\271\317\203\317\204\316\277\316\275 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261\317\202 (\316\272\316\261\316\271 \317\203\317\205\316\275\316\265\317\200\317\216\317\202 \316\255\316\275\316\261\317\202 \317\204\316\277\317\205\316\273\316\254\317\207\316\271\317\203\317\204\316\277\316\275 \316\247\316"
                        "\254\317\201\317\204\316\267\317\202) \316\255\317\207\316\277\317\205\316\275 \316\264\316\267\316\274\316\271\316\277\317\205\317\201\316\263\316\267\316\270\316\265\316\257, \316\277 \317\204\317\201\316\255\317\207\316\277\316\275 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261\317\202 \316\274\317\200\316\277\317\201\316\265\316\257 \316\275\316\261 \316\272\316\271\316\275\316\267\316\270\316\265\316\257 \317\200\316\254\316\275\317\211 \317\203\317\204\316\277\316\275 \317\204\317\201\316\255\317\207\316\277\316\275 \316\247\316\254\317\201\317\204\316\267 \316\274\316\265 \317\204\316\277 \317\200\316\254\317\204\316\267\316\274\316\261 \317\204\316\277\317\205 \316\272\316\277\317\205\316\274\317\200\316\271\316\277\317\215 Move Character (\316\274\316\265 \316\261\317\200\317\214\316\273\317\205\317\204\316\265\317\202 \317\203\317\205\316\275\317\204\316\265\317\204\316\261\316\263\316\274\316\255\316\275\316\265\317\202) \316\256 \316\274\316\265 \317\204\316\277 \317\200\316"
                        "\254\317\204\316\267\316\274\316\261 \317\204\317\211\316\275 \316\272\316\277\317\205\316\274\317\200\316\271\317\216\316\275 WASD.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\302\240</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\232\316\254\317\204\317\211 \316\261\317\200\317\214 \317\204\316\261 \317\200\316\265\316\264\316\257\316\261 Current Map \316\272\316\261\316\271 Current Character, \316\277 \316\247\317\201\316\256\317\203\317\204\316\267\317\202 \316\274\317\200\316\277\317\201\316\265\316\257 \316\275\316\261 \316\265\316\275\316\261\316\273\316\273\316\254\317\203\317\203\316\265\317\204\316\261\316\271 \316\274\316\265\317\204\316\261\316\276\317\215 \316\247\316\261\317\201\317\204\317\216\316\275 \316\272\316\261"
                        "\316\271 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\317\211\316\275 \316\265\316\257\317\204\316\265 \316\272\317\205\316\272\316\273\316\271\316\272\316\254 (\316\274\316\265 \317\204\316\277 \317\200\316\254\317\204\316\267\316\274\316\261 \317\204\316\277\317\205 \316\272\316\277\317\205\316\274\317\200\316\271\316\277\317\215 &gt;&gt;) \316\265\316\257\317\204\316\265 \316\274\316\265 \316\261\317\200\316\265\317\205\316\270\316\265\316\257\316\261\317\202 \316\265\317\200\316\271\316\273\316\277\316\263\316\256 (\316\261\317\200\317\214 \317\204\316\261 drop-down menus).</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\302\240</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\243\317\204\316\267\316\275 \316\273"
                        "\316\257\317\203\317\204\316\261 Powers \316\265\316\274\317\206\316\261\316\275\316\257\316\266\316\277\316\275\317\204\316\261\316\271 \316\277\316\271 \316\264\317\205\316\275\316\254\316\274\316\265\316\271\317\202 \317\204\316\277\317\205 \317\204\317\201\316\255\317\207\316\277\316\275\317\204\316\277\317\202 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261, \316\274\316\265 \316\261\317\205\317\204\316\255\317\202 \317\200\316\277\317\205 \316\264\316\265\316\275 \316\265\316\257\316\275\316\261\316\271 \316\261\316\272\317\214\316\274\316\261 \316\264\316\271\316\261\316\270\316\255\317\203\316\271\316\274\316\265\317\202 (\316\273\317\214\316\263\317\211 \316\265\317\200\316\271\317\200\316\255\316\264\316\277\317\205 \317\207\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261) \316\275\316\261 \316\265\316\274\317\206\316\261\316\275\316\257\316\266\316\277\316\275\317\204\316\261\316\271 \317\204\316\265\316\273\316\265\317\205\317\204\316\261\316\257\316\265\317"
                        "\202 \316\274\316\265 \316\263\316\272\317\201\316\271 \317\207\317\201\317\216\316\274\316\261.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\221\316\275 \316\265\317\200\316\271\316\273\316\265\317\207\316\270\316\265\316\257 \316\274\316\257\316\261 \316\264\317\215\316\275\316\261\316\274\316\267, \316\270\316\261 \316\265\316\274\317\206\316\261\316\275\316\271\317\203\317\204\316\265\316\257 \316\255\316\275\316\261 \317\200\316\261\317\201\316\254\316\270\317\205\317\201\316\277 \316\274\316\265 \317\204\316\271\317\202 \316\273\316\265\317\200\317\204\316\277\316\274\316\255\317\201\316\265\316\271\316\265\317\202 \316\263\316\271\316\261 \316\261\317\205\317\204\316\256 \317\204\316\267 \316\264\317\215\316\275\316\261\316\274\316\267. \316\221\316\275 \317\204\316\277 \317\200\316\261\316\271\317\207\316\275\316\257\316\264\316\271 \316\262\317\201\316\257\317"
                        "\203\316\272\316\265\317\204\316\261\316\271 \317\203\316\265 \316\273\316\265\316\271\317\204\316\277\317\205\317\201\316\263\316\265\316\257\316\261 \316\274\316\254\317\207\316\267\317\202 \316\270\316\261 \316\265\316\274\317\206\316\261\316\275\316\271\317\203\317\204\316\265\316\257 \316\265\317\200\316\271\317\200\316\273\316\255\316\277\316\275 \316\274\316\257\316\261 \317\206\317\214\317\201\316\274\316\261 \316\263\316\271\316\261 \316\275\316\261 \316\265\317\200\316\271\316\273\316\265\317\207\316\270\316\265\316\257 \316\277 \317\203\317\204\317\214\317\207\316\277\317\202 \316\263\316\271\316\261 \316\261\317\205\317\204\316\256 \317\204\316\267 \316\264\317\215\316\275\316\261\316\274\316\267 (\316\261\316\275 \316\265\316\257\316\275\316\261\316\271 \316\264\317\205\316\275\316\261\317\204\317\214\316\275 \316\275\316\261 \317\204\316\267 \317\207\317\201\316\267\317\203\316\271\316\274\316\277\317\200\316\277\316\271\316\256\317\203\316\265\316\271 \316\277 \316\247\316\261\317\201\316\261\316"
                        "\272\317\204\316\256\317\201\316\261\317\202) \316\265\316\257\317\204\316\265 \316\274\316\265 \317\203\317\205\316\275\317\204\316\265\317\204\316\261\316\263\316\274\316\255\316\275\316\265\317\202, \316\265\316\257\317\204\316\265 \316\274\316\265 \316\265\317\200\316\271\316\273\316\277\316\263\316\256 \316\247\316\261\317\201\316\261\316\272\317\204\316\256\317\201\316\261.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cambria,serif';\">\316\240\316\271\316\255\316\266\316\277\316\275\317\204\316\261\317\202 \317\204\316\277 \316\272\316\277\317\205\316\274\317\200\316\257 Character Details \316\265\316\274\317\206\316\261\316\275\316\257\316\266\316\265\317\204\316\261\316\271 \317\204\316\277 \317\200\316\261\317\201\316\254\316\270\317\205\317\201\316\277 \316\273\316\265\317\200\317\204\316\277\316\274\316\265\317\201\316\265\316\271\317\216\316\275 \317\207\316\261\317\201\316\261"
                        "\316\272\317\204\316\256\317\201\316\261.</span> </p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DiceobuInfo", "Game Interface", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiceobuInfo: public Ui_DiceobuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICEOBUINFO_H