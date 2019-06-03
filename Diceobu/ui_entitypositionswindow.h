/********************************************************************************
** Form generated from reading UI file 'entitypositionswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTITYPOSITIONSWINDOW_H
#define UI_ENTITYPOSITIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_EntityPositionsWindow
{
public:

    void setupUi(QDialog *EntityPositionsWindow)
    {
        if (EntityPositionsWindow->objectName().isEmpty())
            EntityPositionsWindow->setObjectName(QString::fromUtf8("EntityPositionsWindow"));
        EntityPositionsWindow->resize(414, 323);

        retranslateUi(EntityPositionsWindow);

        QMetaObject::connectSlotsByName(EntityPositionsWindow);
    } // setupUi

    void retranslateUi(QDialog *EntityPositionsWindow)
    {
        EntityPositionsWindow->setWindowTitle(QApplication::translate("EntityPositionsWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EntityPositionsWindow: public Ui_EntityPositionsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTITYPOSITIONSWINDOW_H
