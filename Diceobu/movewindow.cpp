#include "movewindow.h"
#include "ui_movewindow.h"
#include "mainDependancies.h"
#include <QDebug>
#include <QMessageBox>

MoveWindow::MoveWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MoveWindow)
{
    ui->setupUi(this);
    setFixedSize(250,130);
    setWindowTitle("Move Character");


    std::list<Map*> tempMaps = getActiveMaps();

    if (!tempMaps.empty())
    {
        for (int i = 0; i <= tempMaps.size()+1; i++)
        {
            ui->comboBox_Maps_Move->removeItem(0);
        }
    }
    std::list <Map*> :: iterator iter;
    for (iter = tempMaps.begin(); iter != tempMaps.end(); iter++)
        {
            Map* tempMap = *iter;
            if (tempMap->getMapID() == targetMapID)
            {
            ui->comboBox_Maps_Move->addItem(QString::number(tempMap->getMapID()) + " " +  QString::fromStdString(tempMap->getMapName()));
            }
        }
    for (iter = tempMaps.begin(); iter != tempMaps.end(); iter++)
        {
            Map* tempMap = *iter;
            if (tempMap->getMapID() != targetMapID)
            {
            ui->comboBox_Maps_Move->addItem(QString::number(tempMap->getMapID()) + " " +  QString::fromStdString(tempMap->getMapName()));
            }
        }
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

    if (coordX > 49 || coordX < 0 || coordY > 49 || coordY < 0 )
    {
        QMessageBox::critical(this,"Error!","Target tile is out of bounds!");
    }
    else
    {
        if (currWorkingMap->m_tileGrid[coordX][coordY]->getOccupied() || !currWorkingMap->m_tileGrid[coordX][coordY]->getOpen())
        {
            QMessageBox::critical(this,"Error!","Target tile is closed or already occupied!");
        }
        else
        {
            QStringList tempQSList;
            tempQSList = ui->comboBox_Maps_Move->currentText().split(" ");
            targetMapID = tempQSList.at(0).toInt();

            diceobuSystemCore("3",coordX,coordY);
            close();
        }
    }
}
