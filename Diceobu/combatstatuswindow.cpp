#include "combatstatuswindow.h"
#include "ui_combatstatuswindow.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QLabel>
#include "mainDependancies.h"
#include "Character.h"



CombatStatusWindow::CombatStatusWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CombatStatusWindow)
{
    ui->setupUi(this);
    std::list <Character*> tempCombatQueue;

    int window_width    =   439;
    int window_height   =   300;

    int labelHeight = 40;
    int labelTagWidth = 200;
    int labelValueWidth = 100;
    int spawnX = 10;
    int spawnY = 30;

    int groupBoxX = 10;
    int groupBoxY = 250;
    int groupBoxWidth = 290;
    int groupBoxHeight = 35;

    int maxNameLength = 0;

    tempCombatQueue = getCombatQueue();
    tempCombatQueue.push_front(tempCombatQueue.back());
    tempCombatQueue.pop_back();

    ui->label_Currently_Playing->setText(QString::number(tempCombatQueue.front()->getEntityID()) + " : " + QString::fromStdString(tempCombatQueue.front()->getName()));

    std::list <Character*> :: iterator iter;

    for (iter = tempCombatQueue.begin(); iter != tempCombatQueue.end(); iter++)
    {
        Character* currChar = *iter;
        if (currChar->getName().size() > maxNameLength) { maxNameLength = currChar->getName().size(); }
    }
    labelTagWidth = (maxNameLength * 10) + 30 + labelValueWidth;
    groupBoxWidth = labelTagWidth + 20;

    for (iter = tempCombatQueue.begin(); iter != tempCombatQueue.end(); iter++)
    {
        Character* currChar = *iter;
        ui->listWidget_Combat_Order->addItem(QString::number(currChar->getEntityID()) + " : " + QString::fromStdString(currChar->getName()));

        QLabel *labelTag = new QLabel(ui->groupBox_Status);
        QLabel *labelValue = new QLabel(ui->groupBox_Status);

        //labelTag->setAlignment(Qt::AlignCenter);
        labelTag->setText(QString::fromStdString(currChar->getName()));
        labelValue->setText("HP: " + QString::number(currChar->getCurrHitPoints()) + "/" + QString::number(currChar->getmaxHitPoints()));

        labelValue->setGeometry(spawnX + labelTagWidth - labelValueWidth, spawnY, labelValueWidth, labelHeight);
        labelTag->setGeometry(spawnX, spawnY, labelTagWidth, labelHeight);

        labelTag->setStyleSheet("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 black, stop:1 gray);"
                        "font: 75 12pt \"ImperatorSmallCaps\";"
                        "border-style: solid;"
                        "border-color: black;"
                        "border-width: 2px;"
                        "border-radius: 10px;"
                        "color: white;"
                         );
        labelValue->setStyleSheet("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop:1 gray);"
                        "font: 75 12pt \"ImperatorSmallCaps\";"
                        "border-style: solid;"
                        "border-color: black;"
                        "border-width: 2px;"
                        "border-radius: 10px;"
                        "color: black;"
                         );

        spawnY += labelHeight + 5;
        groupBoxHeight += labelHeight + 5;
        window_height += labelHeight + 5;
    }
    ui->groupBox_Status->setGeometry(groupBoxX,groupBoxY,groupBoxWidth,groupBoxHeight);
    setFixedSize(window_width,window_height);
    setGeometry(690, 150, window_width, window_height);
}

CombatStatusWindow::~CombatStatusWindow()
{
    delete ui;
}
