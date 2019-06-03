#include "entitypositionswindow.h"
#include "ui_entitypositionswindow.h"

EntityPositionsWindow::EntityPositionsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EntityPositionsWindow)
{
    ui->setupUi(this);
}

EntityPositionsWindow::~EntityPositionsWindow()
{
    delete ui;
}
