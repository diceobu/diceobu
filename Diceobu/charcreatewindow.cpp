#include "charcreatewindow.h"
#include "ui_charcreatewindow.h"
#include <QComboBox>
#include <string>
#include <QMessageBox>
#include "mainDependancies.h"
#include "mapwidget.h"

CharCreateWindow::CharCreateWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CharCreateWindow)
{
    ui->setupUi(this);
    this->setFixedSize(350,450);
    setWindowTitle("Create Character");

    /* Classes */
    ui->field_class->addItem("Fighter");
    ui->field_class->addItem("Wizard");
    ui->field_class->addItem("Rogue");
    ui->field_class->addItem("Ranger");
    /* Race */
    ui->field_race->addItem("Human");
    ui->field_race->addItem("Elf");
    ui->field_race->addItem("Dwarf");
    /* Background */
    ui->field_background->addItem("Acolyte");
    ui->field_background->addItem("Criminal");
    ui->field_background->addItem("Folk Hero");
    ui->field_background->addItem("Noble");
    ui->field_background->addItem("Sage");
    ui->field_background->addItem("Soldier");
    /* Alignment */
    ui->field_alignment->addItem("Lawful Good");
    ui->field_alignment->addItem("Lawful Neutral");
    ui->field_alignment->addItem("Lawful Evil");
    ui->field_alignment->addItem("Neutral Good");
    ui->field_alignment->addItem("Neutral");
    ui->field_alignment->addItem("Neutral Evil");
    ui->field_alignment->addItem("Chaotic Good");
    ui->field_alignment->addItem("Chaotic Neutral");
    ui->field_alignment->addItem("Chaotic Evil");
    /* Gender */
    ui->field_gender->addItem("Male");
    ui->field_gender->addItem("Female");

    /*Defaults*/
    ui->field_name->setText("Adam");
    ui->field_balance->setText("0");
    ui->field_level->setText("1");
    ui->field_x->setText("25");
    ui->field_y->setText("25");

   // ui->field_level->placeholderText();
}



CharCreateWindow::~CharCreateWindow()
{
    delete ui;
}


void CharCreateWindow::on_pushButton_confirm_clicked()
{
    std::string cName       = ui->field_name->text().toStdString();
    std::string cGender     = ui->field_gender->currentText().toStdString();
    std::string cClass      = ui->field_class->currentText().toStdString();
    std::string cRace       = ui->field_race->currentText().toStdString();
    std::string cAlignment  = ui->field_alignment->currentText().toStdString();
    std::string cBackground = ui->field_background->currentText().toStdString();
    int         cBalance    = ui->field_balance->text().toInt();
    int         cLevel      = ui->field_level->text().toInt();
    int         coordX      = ui->field_x->text().toInt();
    int         coordY      = ui->field_y->text().toInt();


    if (coordX > 49 || coordX < 0 || coordY > 49 || coordY < 0 )
    {
        QMessageBox::critical(this,"Error!","Target tile is out of bounds!");
    }
    else
    {
        qDebug() << "s86%%" << coordX << coordY << currWorkingMap->m_tileGrid[coordX][coordY]->getOccupied() << currWorkingMap->m_tileGrid[coordX][coordY]->getOpen();
        if (currWorkingMap->m_tileGrid[coordX][coordY]->getOccupied() || !currWorkingMap->m_tileGrid[coordX][coordY]->getOpen())
        {
            QMessageBox::critical(this,"Error!","Target tile is closed or already occupied!");
        }
        else
        {
            diceobuSystemCore("2",coordX,coordY,cName,cGender,cClass,cRace,cAlignment,cBackground,cBalance,cLevel);
            close();
        }
    }

}

void CharCreateWindow::on_pushButton_cancel_clicked()
{
    close();
}

