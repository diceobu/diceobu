#ifndef ENTITYPOSITIONSWINDOW_H
#define ENTITYPOSITIONSWINDOW_H

#include <QDialog>

namespace Ui {
class EntityPositionsWindow;
}

class EntityPositionsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EntityPositionsWindow(QWidget *parent = nullptr);
    ~EntityPositionsWindow();

private:
    Ui::EntityPositionsWindow *ui;
};

#endif // ENTITYPOSITIONSWINDOW_H
