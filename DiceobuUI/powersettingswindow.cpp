#include "powersettingswindow.h"
#include "ui_powersettingswindow.h"
#include "lobbywindow.h"
#include "mainDependancies.h"
#include <list>
#include <iterator>
#include <string>
#include "DiceobuLibrary.h"
#include "Character.h"
#include <tgmath.h>

Character* tempChar;
std::list <Character*> tempCharList = getCombatQueue();
std::list <Character*> :: iterator iter;
int targetDistance;


PowerSettingsWindow::PowerSettingsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PowerSettingsWindow)
{
    ui->setupUi(this);
    setWindowTitle("Choose a Target");
    //setFixedSize();

    for(iter = tempCharList.begin(); iter != tempCharList.end(); iter++)
    {
        tempChar = *iter;
        ui->comboBox_Targets->addItem(QString::number(tempChar->getEntityID()) + " " + QString::fromStdString(tempChar->getName()));
    }

}

PowerSettingsWindow::~PowerSettingsWindow()
{
    delete ui;
}

void PowerSettingsWindow::on_pushButton_cancel_clicked()
{
    close();
}

void PowerSettingsWindow::on_pushButton_confirm_clicked()
{


    int coordX = ui->field_x->text().toInt();
    int coordY = ui->field_x->text().toInt();                   // XY

    QStringList tempQSList;
    tempQSList = ui->comboBox_Targets->currentText().split(" ");
    targetCharacterID = tempQSList.at(0).toInt();                   // Target ID
    for(iter = tempCharList.begin(); iter != tempCharList.end(); iter++)
    {
        tempChar = *iter;
        if (tempChar->getEntityID() == targetMapID) {break;}        // Target Char*
    }

    std::string powerName = tempQString.toStdString();              // Power name str

    targetDistance = sqrt(((tempChar->getCoordinateX()-currWorkingChar->getCoordinateX())^2) - ((tempChar->getCoordinateY()-currWorkingChar->getCoordinateY())^2));

    //if (targetDistance > tempPower.getRange()) {...}
    resolveCombatMove(powerName,tempChar,coordX,coordY);



}
