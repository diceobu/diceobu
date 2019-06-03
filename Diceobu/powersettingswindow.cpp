#include "powersettingswindow.h"
#include "ui_powersettingswindow.h"
#include "lobbywindow.h"
#include "mainDependancies.h"
#include <list>
#include <iterator>
#include <string>
#include <tgmath.h>
#include <cmath>

static int window_width    =   202;
static int window_height   =   230;

Character* targetChar;
std::list <Character*> targetCharList;
std::list <Character*> :: iterator iter;


int targetDistance;


PowerSettingsWindow::PowerSettingsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PowerSettingsWindow)
{
    ui->setupUi(this);
    setWindowTitle("Choose a Target");
    setFixedSize(window_width, window_height);
    targetCharList = getCombatQueue();


    for (int i = 0; i < targetCharList.size() +1; i++)
    {
        ui->comboBox_Targets->removeItem(i);
    }

    for(iter = targetCharList.begin(); iter != targetCharList.end(); iter++)
    {
        targetChar = *iter;
        ui->comboBox_Targets->addItem(QString::number(targetChar->getEntityID()) + " " + QString::fromStdString(targetChar->getName()));
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
    for(iter = targetCharList.begin(); iter != targetCharList.end(); iter++)
    {
        targetChar = *iter;
        if (targetChar->getEntityID() == targetCharacterID) {break;}        // Target Char*
    }

    std::string powerName = tempQString.toStdString();              // Power name str

    targetDistance = sqrt((std::pow(targetChar->getCoordinateX()-currWorkingChar->getCoordinateX(),2)) + (std::pow(targetChar->getCoordinateY()-currWorkingChar->getCoordinateY(),2)));
    int x = targetChar->getCoordinateY()-currWorkingChar->getCoordinateY();
    Power* tempPower = findPower(powerName);

    if (targetDistance > tempPower->getRange())
    {
        emit mui->errorMessage(12);
    }
    else
    {
        resolveCombatMove(powerName,targetChar,coordX,coordY);
        close();
    }
}

void PowerSettingsWindow::on_comboBox_Targets_activated(const QString &arg1)
{
    QStringList tempQSList;
    tempQSList = ui->comboBox_Targets->currentText().split(" ");
    targetCharacterID = tempQSList.at(0).toInt();                   // Target ID
    for(iter = targetCharList.begin(); iter != targetCharList.end(); iter++)
    {
        targetChar = *iter;
        if (targetChar->getEntityID() == targetCharacterID) {break;}        // Target Char*
    }

    ui->field_x->setText(QString::number(targetChar->getCoordinateX()));
    ui->field_y->setText(QString::number(targetChar->getCoordinateY()));
}
