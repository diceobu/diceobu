#include "mapcreatewindow.h"
#include "ui_mapcreatewindow.h"
#include "mainDependancies.h"
#include "DiceobuLibrary.h"
//#include <string>

std::string mapName;
std::string mapFilepath;

MapCreateWindow::MapCreateWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MapCreateWindow)
{
    ui->setupUi(this);

    setFixedSize(250,130);
    setWindowTitle("New Map");

    ui->comboBox_Maps_Create->addItem("Castle of Belithriel");
    ui->comboBox_Maps_Create->addItem("Woods of Oblivion");

}

MapCreateWindow::~MapCreateWindow()
{
    delete ui;
}

void MapCreateWindow::on_pushButton_confirm_clicked()
{
    mapName = ui->comboBox_Maps_Create->currentText().toStdString();
    if (ui->comboBox_Maps_Create->currentText() == "Castle of Belithriel")
    {
        mapFilepath = "map-Castle_of_Belithriel.dat";
    }
    else if (ui->comboBox_Maps_Create->currentText() == "Woods of Oblivion")
    {
        mapFilepath = "map-Woods_of_Oblivion.dat";
    }

    diceobuSystemCore("1");
    close();

}
