#include "characterdetailswindow.h"
#include "ui_characterdetailswindow.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QImage>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include "mainDependancies.h"
#include "DiceobuLibrary.h"

static int window_width    =   640;
static int window_height   =   420;
static bool expanded = false;

CharacterDetailsWindow::CharacterDetailsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CharacterDetailsWindow)
{
    ui->setupUi(this);
    expanded = false;
    setFixedSize(window_width,window_height);
    setGeometry(630, 150, window_width, window_height);
    setWindowTitle("Character Details");

    QPixmap Image (":/img/labelImage2.png");
    ui->label_Image->resize(205,273); // 256*0.8,341*0.8
    ui->label_Image->setPixmap(Image.scaled(205,273));

    QPixmap AC (":/img/labelAC2.png");
    ui->label_AC->setPixmap(AC.scaled(70,72));

    QPixmap AbilityScores (":/img/labelAS2.png");
    ui->label_Ability_Scores->setPixmap(AbilityScores.scaled(80,84));

    ui->label_Name->setText(QString::fromStdString(currWorkingChar->getName()));
    ui->label_Class_Level->setText("<font size=5>" + QString::fromStdString(currWorkingChar->getCClass()) + "</font>" + "\n Level " + QString::number(currWorkingChar->getLevel()));
    ui->label_Alignment->setText(QString::fromStdString(currWorkingChar->getAlignment()));
    ui->label_Background_Race->setText(QString::fromStdString(currWorkingChar->getGender()) + " " + QString::fromStdString(currWorkingChar->getRace()) + "\n" + QString::fromStdString(currWorkingChar->getBackground()));
    ui->label_Size->setText(QString::fromStdString(currWorkingChar->getSize()));
    //ui->label_Languages->setText(QString::fromStdString(currWorkingChar->getLanguages()));



    ui->label_Ability_Scores_Value->setText(QString::number(currWorkingChar->getAbilityScores()));
    ui->label_AC_Value->setText(QString::number(currWorkingChar->getArmorClass()));
    ui->label_EXP->setText(QString::number(currWorkingChar->getExp()));
    ui->label_HP->setText(QString::number(currWorkingChar->getCurrHitPoints()) + "/" + QString::number(currWorkingChar->getmaxHitPoints()) + " (+"
                          + QString::number(currWorkingChar->getOverheal()) + ")");
    ui->label_Weight->setText(QString::number(currWorkingChar->getWeight()) + "<font size=3> lbs. </font>");
    ui->label_Height->setText(QString::number(currWorkingChar->getHeight()) + "'");
    ui->label_Speed->setText(QString::number(currWorkingChar->getSpeed()) + "<font size=3> ft. </font>");
    ui->label_Reach->setText(QString::number(currWorkingChar->getReach()) + "<font size=3> ft. </font>" );
    ui->label_Vision_Range->setText(QString::number(currWorkingChar->getVisionRange()) + " ft.");
    ui->label_Balance->setText(QString::number(currWorkingChar->getBalance()) + " g");

    std::list<std::string> :: iterator iter;
    std::string currentPower;
    std::list<std::string> *tempPowers;
    tempPowers = currWorkingChar->getPowers();

    for(iter =tempPowers->begin(); iter != tempPowers->end(); iter++)
    {
        currentPower = *iter;
        ui->listWidget_Powers->addItem(QString::fromStdString(currentPower));
    }

    ui->label_ID->setText(QString::number(currWorkingChar->getEntityID()));
    ui->label_Current_Map->setText(QString::number(currWorkingChar->getCurrMap()->getMapID()));
    ui->label_XY->setText("{" + QString::number(currWorkingChar->getCoordinateX()) + "," + QString::number(currWorkingChar->getCoordinateX()) + "}");


    ui->line->setVisible(expanded);
    ui->line_2->setVisible(expanded);
    ui->label_More_Details->setVisible(expanded);

    QPixmap classImage = currWorkingChar->getClassImage();
    ui->label_Image_Value->setPixmap(classImage);
}

CharacterDetailsWindow::~CharacterDetailsWindow()
{
    delete ui;
}

void CharacterDetailsWindow::on_pushButton_close_clicked()
{
    close();
}

void CharacterDetailsWindow::on_pushButton_close_2_clicked()
{
     close();
}

void CharacterDetailsWindow::on_pushButton_More_clicked()
{
    setFixedSize(640,760);
    ui->pushButton_More->setVisible(expanded);
    ui->pushButton_close->setVisible(expanded);
    expanded = true;
    ui->pushButton_Less->setVisible(expanded);
    ui->pushButton_close_2->setVisible(expanded);
    ui->line->setVisible(expanded);
    ui->line_2->setVisible(expanded);
    ui->label_More_Details->setVisible(expanded);
}

void CharacterDetailsWindow::on_pushButton_Less_clicked()
{
    setFixedSize(640,420);
    ui->pushButton_More->setVisible(expanded);
    ui->pushButton_close->setVisible(expanded);
    expanded = false;
    ui->pushButton_Less->setVisible(expanded);
    ui->pushButton_close_2->setVisible(expanded);
    ui->line->setVisible(expanded);
    ui->line_2->setVisible(expanded);
    ui->label_More_Details->setVisible(expanded);
}

