#include "lobbywindow.h"
#include "ui_lobbywindow.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QImage>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QDesktopWidget>
#include <QVector>
#include <string>
#include <QPaintEvent>
#include <QPainter>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include "mainDependancies.h"
#include "Map.h"
#include "DiceobuLibrary.h"
#include "mainuiclass.h"
#include <QObject>
#include <QKeyEvent>
#include <QStringList>
#include <QStyle>
#include "charactersaves.h"
#include <QFileDialog>
#include "powersettingswindow.h"
#include <QToolTip>


static int window_width    =   1440;
static int window_height   =   900;

QString tempQString;
int targetMapID;
int targetCharacterID;

int directionalMovement = 0;

MainUIClass *mui = new MainUIClass;

LobbyWindow::LobbyWindow(QWidget *parent) :
    QMainWindow(),
    ui(new Ui::LobbyWindow)
{
    ui->setupUi(this);

    connect(mui, SIGNAL(updateCombatLog(int, Character*, int, std::string)),
            this, SLOT(updateCombatLog(int, Character*, int, std::string)));
    connect(mui, SIGNAL(refreshCurrent()),
            this, SLOT(displayCurrent()));
    connect(mui, SIGNAL(updateLog(std::string ,Map* ,int , std::string, Map* , std::string , Character* ,std::string , int ,int )),
            this, SLOT(updateSystemLog(std::string ,Map* ,int , std::string, Map* , std::string , Character* ,std::string , int ,int )));
	connect(mui, SIGNAL(errorMessage(int)),
			this, SLOT(errorHandler(int)));

    QPixmap background(":/img/bg4.jpg");
    setFixedSize(window_width,window_height);
    background = background.scaled(window_width+50,window_height+50, Qt::IgnoreAspectRatio);

    ui->pushButton_System_Log->setChecked(false);
    ui->pushButton_Combat_Log->setChecked(true);


    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this->setPalette(palette);

    displayCurrent();
    checkLists();
}



LobbyWindow::~LobbyWindow()
{
    delete ui;
}



void LobbyWindow::on_pushButton_5_clicked()
{

//    currWorkingChar->getPowers()->push_back("Hello");
//    qDebug() << "lw78" << QString::fromStdString(currWorkingChar->getPowers()->back());
    qDebug() << inCombat;
    nextTurn();
   // diceobuSystemCore("4");


}

void LobbyWindow::on_actionSaveCharacter_triggered()
{
    if (!activeCharactersisEmpty())
    {
        savePlayerCharacter();
    }
    else
    {
        emit mui->errorMessage(5);
    }
}

void LobbyWindow::on_actionLoadCharacter_triggered()
{
    if (inCombat)
    {
        emit mui->errorMessage(9);
        return;
    }

    if (!activeMapsisEmpty())
    {
        QString saveFilePath = QFileDialog::getOpenFileName(this, tr("Choose a Player Character to load"),"saves","Character Files (*.pc)");
        if (saveFilePath != "")
        {
        loadPlayerCharacter(saveFilePath.toStdString());
        }
    }
    else
    {
        emit mui->errorMessage(1);
    }
}

void LobbyWindow::on_actionNewCharacter_triggered()
{
    if (inCombat)
    {
        emit mui->errorMessage(9);
        return;
    }

    if (activeMapsisEmpty())
    {
        QMessageBox::critical(this,"Error!","Cannot create character with no existing Maps!");
    }
    else
    {
        charCreateWindow = new CharCreateWindow(this);
        charCreateWindow->show();
    }
}

void LobbyWindow::on_pushButton_Character_Details_clicked()
{
    if (activeCharactersisEmpty())
    {
        errorHandler(5);
    }
    else
    {
        characterDetailsWindow = new CharacterDetailsWindow(this);
        characterDetailsWindow->show();
    }
}

void LobbyWindow::on_pushButton_Move_clicked()
{
    if (currWorkingChar->getCurrHitPoints() <= 0)
        {
            emit mui->errorMessage(8);
            return;
        }
    if (getActiveMaps().empty())
    {
        QMessageBox::critical(this,"Error!","Nothing to move!");
    }
    else
    {
        if (currWorkingMap->m_containingCharacters.empty())
        {
            QMessageBox::critical(this,"Error!","Nothing to move!");
        }
        else
        {
         targetMapID = currWorkingMap->getMapID();
            moveWindow = new MoveWindow(this);
            qDebug() << "starting move from" << targetMapID;
            moveWindow->show();
        }
    }

}

void LobbyWindow::on_actionDeleteMap_triggered()
{
    if (inCombat)
    {
        emit mui->errorMessage(9);
        return;
    }
    diceobuSystemCore("8");
}

void LobbyWindow::on_actionNewMap_triggered()
{
    if (inCombat)
    {
        emit mui->errorMessage(9);
        return;
    }
    mapCreateWindow = new MapCreateWindow(this);
    mapCreateWindow->show();
    //diceobuSystemCore("1");
}

void LobbyWindow::on_pushButton_nextMap_clicked()
{
    if (inCombat)
    {
        emit mui->errorMessage(9);
        return;
    }
    diceobuSystemCore("10");
}

void LobbyWindow::on_actionDeleteCharacter_triggered()
{
    if (inCombat)
    {
        emit mui->errorMessage(9);
        return;
    }
    diceobuSystemCore("9");
}


void LobbyWindow::on_pushButton_nextCharacter_clicked()
{
    if (inCombat)
    {
        emit mui->errorMessage(9);
        return;
    }
    diceobuSystemCore("11");
}

void LobbyWindow::on_pushButton_Grid_toggled(bool checked)
{
    grid = checked;
    displayCurrent();
}

void LobbyWindow::on_comboBox_Maps_activated(const QString &arg1)
{
    if (inCombat)
    {
        emit mui->errorMessage(9);
        return;
    }
    QStringList tempQSList;
    tempQSList = ui->comboBox_Maps->currentText().split(" ");
    targetMapID = tempQSList.at(0).toInt();
    diceobuSystemCore("13");
}

void LobbyWindow::on_comboBox_Characters_activated(const QString &arg1)
{
    if (inCombat)
    {
        emit mui->errorMessage(9);
        return;
    }
    QStringList tempQSList;
    tempQSList = ui->comboBox_Characters->currentText().split(" ");
    targetCharacterID = tempQSList.at(0).toInt();
    diceobuSystemCore("14");
}

void LobbyWindow::displayCurrent()
{
    //currWorkingMap->writeMap();
	initPixmapArray();

    ui->pushButton_Move->setVisible(!inCombat);
    ui->pushButton_nextMap->setVisible(!inCombat);
    ui->pushButton_nextCharacter->setVisible(!inCombat);
    ui->comboBox_Maps->setVisible(!inCombat);
    ui->comboBox_Characters->setVisible(!inCombat);    

    ui->pushButton_Combat_Status->setVisible(inCombat);
    ui->groupBox_NextUp->setVisible(inCombat);
    ui->pushButton_Skip_Turn->setVisible(inCombat);

    if (activeMapsisEmpty())
    {
        ui->label_currMap->setText("None");
    }
    else
    {
        ui->label_currMap->setText(QString::number(currWorkingMap->getMapID()) + " : " + QString::fromStdString(currWorkingMap->getMapName()));
    }

    if (activeCharactersisEmpty())
    {
        ui->label_currChar->setText("None");
    }
    else
    {
        ui->label_currChar->setText(QString::number(currWorkingChar->getEntityID()) + " : " + QString::fromStdString(currWorkingChar->getName()));
    }
    ui->tableWidget->update();
    updateLists();
}




void LobbyWindow::updateLists()
{

    std::list<Map*> tempMaps = getActiveMaps();
    std::list<Character*> tempCharacters = getActiveCharacters();

	if (!activeCharactersisEmpty())
	{
		std::list<std::string> ::iterator iter3;
		std::string currentPower;
		std::list<std::string> *tempPowers;
		tempPowers = currWorkingChar->getPowers();

        //qDeleteAll(ui->listWidget_Powers->selectedItems());
        ui->listWidget_Powers_Lobby->clear();
        int i = 0;
		for (iter3 = tempPowers->begin(); iter3 != tempPowers->end(); iter3++)
		{
			currentPower = *iter3;
            Power* currentPowerObj = findPower(currentPower);
            if (currWorkingChar->getLevel() >= currentPowerObj->getLevelReq())
            {
                    ui->listWidget_Powers_Lobby->addItem(QString::fromStdString(currentPower));
                    i++;
            }

		}
qDebug() << "hui";
        for (iter3 = tempPowers->begin(); iter3 != tempPowers->end(); iter3++)
        {
            currentPower = *iter3;
            Power* currentPowerObj = findPower(currentPower);
            if (currWorkingChar->getLevel() < currentPowerObj->getLevelReq())
            {
                ui->listWidget_Powers_Lobby->addItem(QString::fromStdString(currentPower));
                ui->listWidget_Powers_Lobby->item(i)->setForeground(Qt::gray);
                i++;
            }

        }


	}
    ui->listWidget_Powers_Lobby->setToolTip("Test");
	

    if (activeMapsisEmpty())
    {
        ui->comboBox_Maps->removeItem(0);
        ui->comboBox_Maps->addItem("No Maps available.");
    }
    else
    {
        for (int i = 0; i <= tempMaps.size() + 1; i++)
        {
            ui->comboBox_Maps->removeItem(0);
        }
        std::list <Map*> :: iterator iter;
        for (iter = tempMaps.begin(); iter != tempMaps.end(); iter++)
        {
            Map* tempMap = *iter;
            if (tempMap->getMapID() == currWorkingMap->getMapID())
            {
                ui->comboBox_Maps->addItem(QString::number(tempMap->getMapID()) + " : " +  QString::fromStdString(tempMap->getMapName()));
            break;
            }
        }
        for (iter = tempMaps.begin(); iter != tempMaps.end(); iter++)
        {
            Map* tempMap = *iter;
            if (tempMap->getMapID() != currWorkingMap->getMapID())
            {
                ui->comboBox_Maps->addItem(QString::number(tempMap->getMapID()) + " : " +  QString::fromStdString(tempMap->getMapName()));
            }
        }
    }


    if (activeCharactersisEmpty())
    {
        ui->comboBox_Characters->removeItem(0);
        ui->comboBox_Characters->addItem("No Characters available.");
    }
    else
    {
        for (int i = 0; i <= tempCharacters.size() + 1; i++)
        {
            ui->comboBox_Characters->removeItem(0);
        }

        std::list <Character*> :: iterator iter2;
        for (iter2 = tempCharacters.begin(); iter2 != tempCharacters.end(); iter2++)
        {
            Character* tempCharacter = *iter2;
            if (tempCharacter->getEntityID() == currWorkingChar->getEntityID())
            {
            ui->comboBox_Characters->addItem(QString::number(tempCharacter->getEntityID()) + " : " +  QString::fromStdString(tempCharacter->getName()));
            break;
            }
        }
        for (iter2 = tempCharacters.begin(); iter2 != tempCharacters.end(); iter2++)
        {
            Character* tempCharacter = *iter2;
            if (tempCharacter->getEntityID() != currWorkingChar->getEntityID())
            {
            ui->comboBox_Characters->addItem(QString::number(tempCharacter->getEntityID()) + " : " +  QString::fromStdString(tempCharacter->getName()));
            }
        }
    }

    tempCharacters = getCombatQueue();
    if (!tempCharacters.empty())
    {
        ui->label_Next_Up->setText(QString::number(tempCharacters.front()->getEntityID()) + " : " +  QString::fromStdString(tempCharacters.front()->getName()));
    }
//    if (!tempCharacters.empty())
//    {
//        std::list <Character*> :: iterator iter2;
//        Character* currChar;
//        std::list<std::string> *tempPowers;
//        tempPowers = currWorkingChar->getPowers();

//        ui->listWidget_NextUp->clear();
//        for (iter2 = tempCharacters.begin(); iter2 != tempCharacters.end(); iter2++)
//        {
//            currChar = *iter2;
//            ui->listWidget_NextUp->addItem(QString::number(currChar->getEntityID()) + QString::fromStdString(currChar->getName()));
//        }
//    }

}

void LobbyWindow::keyPressEvent(QKeyEvent *e)
{
    if (!activeMapsisEmpty())
    {
        if (currWorkingMap->m_containingCharacters.empty())
        {
            QMessageBox::critical(this,"Error!","Nothing to move!");
        }
        else
        {
            if ((e->key() == Qt::Key_W) || (e->key() == Qt::Key_S) || (e->key() == Qt::Key_A) || (e->key() == Qt::Key_D))
            {
                int coordX = currWorkingChar->getCoordinateX();
                int coordY = currWorkingChar->getCoordinateY();

                directionalMovement = 1;

                if (e->key() == Qt::Key_W) // Up
                {
                    if (coordX > 0)
                    {
                        coordX--;
                    }
                }
                else if (e->key() == Qt::Key_S) // Down
                {
                    if (coordX < 49)
                    {
                        coordX++;
                    }
                }
                else if (e->key() == Qt::Key_A) // Left
                {
                    if (coordY > 0)
                    {
                        coordY--;
                    }
                }
                else if (e->key() == Qt::Key_D) // Right
                {
                    if (coordY < 49)
                    {
                        coordY++;
                    }
                }
                if (currWorkingMap->m_tileGrid[coordX][coordY]->getOccupied() || !currWorkingMap->m_tileGrid[coordX][coordY]->getOpen() )
                {
                    // Sound effect KAPPA
                }
                else
                {
                    //qDebug() <<  coordX << coordY;

                   diceobuSystemCore("3",coordX,coordY);
                }
            }
        }
    }
}

void LobbyWindow::updateSystemLog(std::string input,Map* this_currWorkingMap,int currWorkingCharID, std::string currWorkingCharName,
                                  Map* previousMap, std::string previousMapName, Character* previousCharacter,std::string previousCharacterName, int coordX,int coordY)
{
    if (input == "1")
    {
       ui->system_log->append(QString(">> Created Map [ID: %1] - %2.").arg(QString::number(this_currWorkingMap->getMapID()),
                                                                         QString::fromStdString(this_currWorkingMap->getMapName())));
    }
    else if (input == "2")
    {
        ui->system_log->append(QString(">> Created Character [ID: %1] - %2 on Map [ID: %3] at {%4,%5}.").arg(QString::number(currWorkingCharID),
                                                                                                             QString::fromStdString(currWorkingCharName),
                                                                                                             QString::number(currWorkingMap->getMapID()),
                                                                                                             QString::number(coordX),
                                                                                                             QString::number(coordY)));
    }
    else if (input == "3")
    {
        ui->system_log->append(QString(">> Moved Character [ID: %1] - %2 on Map [ID: %3] to {%4,%5}.").arg(QString::number(currWorkingCharID),
                                                                                                             QString::fromStdString(currWorkingCharName),
                                                                                                             QString::number(currWorkingMap->getMapID()),
                                                                                                             QString::number(coordX),
                                                                                                             QString::number(coordY)));
    }
    else if (input == "8")
    {
        ui->system_log->append(QString(">> Deleted Map [ID: %1] - %2.").arg(QString::number(previousMap->getMapID()),
                                                                            QString::fromStdString(previousMapName)));
    }
    else if (input == "9")
    {
        ui->system_log->append(QString(">> Deleted Character [ID: %1] - %2.").arg(QString::number(previousCharacter->getEntityID()),
                                                                                 QString::fromStdString(previousCharacterName)));
    }
    else if (input == "10" || input == "13")
    {
        ui->system_log->append(QString(">> Changed view from Map [ID: %1] to Map [ID: %2] - %3.").arg(QString::number(previousMap->getMapID()),
                                                                                                      QString::number(currWorkingMap->getMapID()),
                                                                                                      QString::fromStdString(currWorkingMap->getMapName())));
    }
    else if (input == "11" || input == "14")
    {
        ui->system_log->append(QString(">> Changed view from Character [ID: %1] to Character [ID: %2] - %3.").arg(QString::number(previousCharacter->getEntityID()),
                                                                                                                  QString::number(currWorkingCharID),
                                                                                                                  QString::fromStdString(currWorkingCharName)));
    }
    else if (input == "15")
    {
        ui->system_log->append(QString(">> Loaded Character [ID %1] - %2 at {%3,%4}").arg(QString::number(currWorkingChar->getEntityID()),
                                                                                         QString::fromStdString(currWorkingChar->getName()),
                                                                                                      QString::number(currWorkingChar->getCoordinateX()),
                                                                                                                      QString::number(currWorkingChar->getCoordinateY())
                                                                                                      ));
    }
    else if (input == "16")
    {
        ui->system_log->append(QString(">> Saved Character [ID: %1] - %2 to saves/%2.pc.").arg(QString::number(currWorkingChar->getEntityID()),
                                                                                               QString::fromStdString(currWorkingChar->getName())));
    }

}

void LobbyWindow::updateCombatLog(int input, Character* targetChar, int damageDealt, std::string powerUsed)
{
    switch (input)
    {
    case 1:
        ui->combat_log->append(QString(">> [ID: %1] - %2 dealt %3 damage to [ID: %4] - %5 with %6.").arg(QString::number(currWorkingChar->getEntityID()),
                                                                                                QString::fromStdString(currWorkingChar->getName()),
                                                                                                QString::number(damageDealt),
                                                                                                QString::number(targetChar->getEntityID()),
                                                                                                QString::fromStdString(targetChar->getName()),
                                                                                                QString::fromStdString(powerUsed)));
        break;
    case 2:
        ui->combat_log->append(QString(">> [ID: %1] - %2 skipped their turn.").arg(QString::number(currWorkingChar->getEntityID()),
                                                                                   QString::fromStdString(currWorkingChar->getName())));
        break;
    }
}


void LobbyWindow::errorHandler(int errorCode)
{
	switch (errorCode)
	{
	case 1:
        QMessageBox::critical(this, "Error!", "Cannot create character with no existing Maps!");
        break;
	case 2:
		QMessageBox::critical(this, "Error!", "Nothing to delete!");
		break;
	case 3:
		QMessageBox::critical(this, "Error!", "Cannot delete a Map containing characters!");
		break;
	case 4:
        QMessageBox::critical(this, "Error!", "No Maps found!");
		break;
	case 5:
		QMessageBox::critical(this, "Error!", "No Characters found!");
		break;
    case 6:
        QMessageBox::critical(this,"Error!","Target tile is out of bounds!");
        break;
    case 7:
        QMessageBox::critical(this,"Error!","Target tile is closed or already occupied!");
        break;
    case 8:
        QMessageBox::critical(this,"Error!","Cannot move while dead!");
        break;
    case 9:
        QMessageBox::critical(this,"Error!","Cannot do that while in combat!");
        break;
    case 10:
        QMessageBox::critical(this,"Error!","Not enough Characters to initiate Combat!");
        break;
    case 11:
        QMessageBox::critical(this,"Error!","You have not learnt this Power yet!");
        break;
    case 12:
        QMessageBox::critical(this,"Error!","Target is out of range!");
        break;
    }
}


void LobbyWindow::on_pushButton_Engage_Combat_toggled(bool checked)
{
    inCombatTemp = checked;
    if (checked)
    {
        if (activeMapsisEmpty())
        {
            emit mui->errorMessage(4);
            ui->pushButton_Engage_Combat->setChecked(false);
            return;
        }
        if (currWorkingMap->m_containingCharacters.size() < 2)
        {
            emit mui->errorMessage(10);
            ui->pushButton_Engage_Combat->setChecked(false);
            return;
        }

        ui->tabWidget->setCurrentIndex(1);
        ui->pushButton_System_Log->setChecked(true);
        ui->pushButton_Combat_Log->setChecked(false);

        diceobuSystemCore("4");
    }
    else
    {
        nextTurn();
        ui->tabWidget->setCurrentIndex(0);
        ui->pushButton_System_Log->setChecked(false);
        ui->pushButton_Combat_Log->setChecked(true);
    }
}

void LobbyWindow::on_listWidget_Powers_Lobby_itemClicked(QListWidgetItem *item)
{
    tempQString = item->text();;

    Power* tempPower = findPower(tempQString.toStdString());

    if (currWorkingChar->getLevel() < tempPower->getLevelReq())
    {
        emit mui->errorMessage(11);
    }
    else
    {
     powerSettingsWindow = new PowerSettingsWindow(this);
     powerSettingsWindow->show();
    }
}

void LobbyWindow::on_pushButton_Combat_Status_clicked()
{
    combatStatusWindow = new CombatStatusWindow(this);
    combatStatusWindow->show();
}

void LobbyWindow::on_pushButton_Skip_Turn_clicked()
{
    emit mui->updateCombatLog(2, currWorkingChar, 0, "Skip");
	nextTurn();
}

void LobbyWindow::on_pushButton_System_Log_toggled(bool checked)
{
    if (checked) {
        ui->tabWidget->setCurrentIndex(1);
        ui->pushButton_Combat_Log->setChecked(false);
    }
    else
    {
        ui->tabWidget->setCurrentIndex(0);
        ui->pushButton_Combat_Log->setChecked(true);
    }
}

void LobbyWindow::on_pushButton_Combat_Log_toggled(bool checked)
{
    if (checked)
    {
        ui->tabWidget->setCurrentIndex(0);
        ui->pushButton_System_Log->setChecked(false);
    }
    else
    {
        ui->tabWidget->setCurrentIndex(1);
        ui->pushButton_System_Log->setChecked(true);

    }
}
