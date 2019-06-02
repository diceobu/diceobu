#ifndef COMBATSTATUSWINDOW_H
#define COMBATSTATUSWINDOW_H

#include <QDialog>

namespace Ui {
class CombatStatusWindow;
}

class CombatStatusWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CombatStatusWindow(QWidget *parent = nullptr);
    ~CombatStatusWindow();

private:
    Ui::CombatStatusWindow *ui;
};

#endif // COMBATSTATUSWINDOW_H
