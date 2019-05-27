#include "movewindow.h"
#include "ui_movewindow.h"
#include "mainDependancies.h"
#include <QDebug>

MoveWindow::MoveWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MoveWindow)
{
    ui->setupUi(this);
    setFixedSize(250,130);
    setWindowTitle("Move Character");

}


MoveWindow::~MoveWindow()
{
    delete ui;
}

void MoveWindow::on_pushButton_cancel_clicked()
{
    close();
}

void MoveWindow::on_pushButton_confirm_clicked()
{
    // qDebug() << "confirmed AA";
    int         coordX      = ui->field_x->text().toInt();
    int         coordY      = ui->field_y->text().toInt();

    diceobuSystemCore("3",coordX,coordY);
    close();
}
