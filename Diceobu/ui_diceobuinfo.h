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

QT_BEGIN_NAMESPACE

class Ui_DiceobuInfo
{
public:

    void setupUi(QDialog *DiceobuInfo)
    {
        if (DiceobuInfo->objectName().isEmpty())
            DiceobuInfo->setObjectName(QString::fromUtf8("DiceobuInfo"));
        DiceobuInfo->resize(400, 300);

        retranslateUi(DiceobuInfo);

        QMetaObject::connectSlotsByName(DiceobuInfo);
    } // setupUi

    void retranslateUi(QDialog *DiceobuInfo)
    {
        DiceobuInfo->setWindowTitle(QApplication::translate("DiceobuInfo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiceobuInfo: public Ui_DiceobuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICEOBUINFO_H
