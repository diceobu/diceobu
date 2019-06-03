#include "powersettingswindow.h"
#include "ui_powersettingswindow.h"
#include "lobbywindow.h"
#include "mainDependancies.h"
#include <list>
#include <iterator>
#include <string>
#include <tgmath.h>
#include <cmath>

static int window_width    =   504;
static int window_height   =   310;

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
    if (inCombat) { window_width = 741;}
    setFixedSize(window_width, window_height);

    std::string powerName = tempQString.toStdString();
    Power* tempPower = findPower(powerName);

    ui->label_Name->setText(QString::fromStdString(tempPower->getName()));

    ui->label_Class_Value->setText(QString::fromStdString(tempPower->getOfClass()));

    ui->label_Damage_Type_Value->setText(QString::fromStdString(tempPower->getDamageType()));

    std::string aoe = tempPower->getAoe();
    if (aoe == "none") { aoe = "Single Target";}
    ui->label_AoE_Value->setText(QString::fromStdString(aoe));

    ui->label_Level_Req_Value->setText(QString::number(tempPower->getLevelReq()));

    std::string range = std::to_string(tempPower->getRange());
    if (range == "0") { range = "Self";}
    ui->label_Range_Value->setText(QString::fromStdString(range));

    ui->label_Damage_Value->setText(QString::number(tempPower->getBaseDamage()));

    ui->textBrowser_Description->setText("\"" + QString::fromStdString(tempPower->getDescription()) + "\"");



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


    if (!targetCharList.empty())
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



    int coordX = ui->field_x->text().toInt();
    int coordY = ui->field_x->text().toInt();                   // XY

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
