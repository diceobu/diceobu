#include "lobbywindow.h"
#include "ui_lobbywindow.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QImage>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

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

//Map* currWorkingMap;

//Character* currWorkingChar;

static int window_width    =   1440;
static int window_height   =   900;
MainUIClass *mui = new MainUIClass;

LobbyWindow::LobbyWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LobbyWindow)
{
    ui->setupUi(this);

   //MainUIClass *mui;
   // // // qDebug() << "was here - before Connect";


    connect(mui, SIGNAL(refreshCurrent()),
            this, SLOT(displayCurrent()));
    connect(mui, SIGNAL(updateLog(std::string ,Map* ,int , std::string, Map* , std::string , Character* ,std::string , int ,int )),
            this, SLOT(updateSystemLog(std::string ,Map* ,int , std::string, Map* , std::string , Character* ,std::string , int ,int )));
    //void updateSystemLog(std::string input,Map* this_currWorkingMap,Map* ,Character* previousCharacter,int coordX,int coordY);

                /*&mui, SIGNAL(refreshCurrent()), &ui, SLOT(displayCurrent()));*/


    QPixmap background(":/img/bg4.jpg");
    setFixedSize(window_width,window_height);
    //background = background.scaled(1920,1080, Qt::IgnoreAspectRatio);
    background = background.scaled(window_width+50,window_height+50, Qt::IgnoreAspectRatio);




    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this->setPalette(palette);

    //createNewMap();
    //createNewCharacter();
    displayCurrent();
    checkLists();
    QString test = "hello";
   // ui->system_log->setText(QString("Hello, test is %1 and %2 goodbye").arg(test,test));
   // ui->system_log->append(test);
}



//    QFile file("F:\\Documents\\GitHub\\DONTTOUCH\\DiceobuUI\\Sample.dat");
//    if (!file.open(QIODevice::ReadOnly))
//            QMessageBox::information(0,"info",file.errorString());


//    QTextStream in(&file);

/*

    //hide();
    QGraphicsView* lobbyWindow = new QGraphicsView;
    QGraphicsScene* scene = new QGraphicsScene;
    QPainter painter(this);



    QPixmap tilepix(":/img/etst1.png");

    QGraphicsPixmapItem *newItem=new QGraphicsPixmapItem(QPixmap(":/img/etst1.png"));
    scene->addItem(newItem);


    QVector< QVector< QPixmap > > pixmap_array;
    pixmap_array.resize(10);

    for (int i = 0; i < pixmap_array.size(); i++)
    {
        pixmap_array[i].resize(10);
        pixmap_array[0][i] = QPixmap(":/img/etst1.png");
       // scene->addPixmap(pixmap_array[0][i]);
    }


//    tilep.load(":/targetimage.png");
    scene->addPixmap(tilepix);
    lobbyWindow->setScene(scene);
   // scene.addPixmap(QPixmap::tilepix);
    // Add the vertical lines first, paint them red
    for (int x=0; x<=500; x+=50)
//        scene->addLine(x,0,x,500, QPen(Qt::red));
    scene->addPixmap(tilepix);
    newItem->setPos(15, -30);


    // Now add the horizontal lines, paint them green
    for (int y=0; y<=500; y+=50)
        scene->addLine(0,y,500,y, QPen(Qt::green));


    // Fit the view in the scene's bounding rect
    //ui->view->fitInView(scene->itemsVBoundingRect());
 // */
    //show();




LobbyWindow::~LobbyWindow()
{
    delete ui;
}

/*
void LobbyWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QVector< QVector< QPixmap > > pixmap_array;

    int startingx = 10;
    int startingy = 100;
    int tilesize = 50;
    int numoftiles = 200;
    int tilesperrow = 15;

    pixmap_array.resize(numoftiles);

    QPoint point1;
    point1.setX(startingx);
    point1.setY(startingy);

    QPoint point2;
    point2.setX(tilesize);
    point2.setY(tilesize);
    int counter = 0;
    for (int i = 0; i < pixmap_array.size(); i++)
    {
        pixmap_array[i].resize(numoftiles);
        pixmap_array[0][i] = QPixmap(":/img/etst1.png");

        painter.drawPixmap(point1.x(),point1.y(),point2.x(),point2.y(), pixmap_array[0][i]);
        counter++;
        point1.setX(point1.x()+tilesize);
        if (counter % tilesperrow == 0) {
            point1.setY(point1.y()+tilesize);
            point1.setX(startingx);
        }
       // point1.setY(point1.y()+50);
        //point2.setX(point2.x()+50);
        //point2.setY(50);
}
}


*/

void LobbyWindow::on_actionNewCharacter_triggered()
{

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


void LobbyWindow::on_pushButton_Move_clicked()
{
    if (currWorkingMap->m_containingCharacters.empty())
    {
        QMessageBox::critical(this,"Error!","Nothing to move!");
    }
    else
    {
    moveWindow = new MoveWindow(this);
    moveWindow->show();
    }
}


void LobbyWindow::on_pushButton_5_clicked()
{

    ui->comboBox_Maps->removeItem(0);
}


void LobbyWindow::on_actionDeleteMap_triggered()
{
    diceobuSystemCore("8");
   QMessageBox::information(this,"?","Placeholder");
}

void LobbyWindow::on_actionNewMap_triggered()
{
    // // qDebug() << "lobbycpp 209///";
    diceobuSystemCore("1");
    //QMessageBox::information(this,"?","Placeholder");
}

void LobbyWindow::on_pushButton_nextMap_clicked()
{
    diceobuSystemCore("10");
   // QMessageBox::information(this,"?","Placeholder");
}

void LobbyWindow::on_actionDeleteCharacter_triggered()
{
    diceobuSystemCore("9");
    QMessageBox::information(this,"?","Placeholder");
}


void LobbyWindow::on_pushButton_nextCharacter_clicked()
{
    diceobuSystemCore("11");
   //
    QMessageBox::information(this,"?","Placeholder");
}

void LobbyWindow::displayCurrent()
{
    //// // qDebug() << "was hereDISPLAY";
    if (activeMapsisEmpty())
    {
        ui->label_currMap->setText("None");
    }
    else
    {
        ui->label_currMap->setText(QString::number(currWorkingMap->getMapID()));
    }

    if (activeCharactersisEmpty())
    {
        ui->label_currChar->setText("None");
    }
    else
    {
        ui->label_currChar->setText(QString::number(currWorkingChar->getEntityID()));
    }
    ui->tableWidget->update();
    updateLists();
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
        qDebug() << "mD 632 " << QString::number(previousMap->getMapID()) << QString::fromStdString(previousMap->getMapName());

        ui->system_log->append(QString(">> Deleted Map [ID: %1] - %2.").arg(QString::number(previousMap->getMapID()),
                                                                            QString::fromStdString(previousMapName)));
    }
    else if (input == "9")
    {
        ui->system_log->append(QString(">> Deleted Character [ID: %1] - %2.").arg(QString::number(previousCharacter->getEntityID()),
                                                                                 QString::fromStdString(previousCharacterName)));
    }
    else if (input == "10")
    {
        ui->system_log->append(QString(">> Changed view from Map [ID: %1] to Map [ID: %2] - %3.").arg(QString::number(previousMap->getMapID()),
                                                                                                      QString::number(currWorkingMap->getMapID()),
                                                                                                      QString::fromStdString(currWorkingMap->getMapName())));
    }
    else if (input == "11")
    {
        ui->system_log->append(QString(">> Changed view from Character [ID: %1] to Character [ID: %2] - %3.").arg(QString::number(previousCharacter->getEntityID()),
                                                                                                                  QString::number(currWorkingCharID),
                                                                                                                  QString::fromStdString(currWorkingCharName)));
    }
}


void LobbyWindow::updateLists(){

    std::list<Map*> tempMaps = getActiveMaps();

    if (!tempMaps.empty())
    {
        for (int i = 0; i <= tempMaps.size()+1; i++)
        {
            ui->comboBox_Maps->removeItem(0);
        }
    }

    std::list <Map*> :: iterator iter;
    for (iter = tempMaps.begin(); iter != tempMaps.end(); iter++)
        {
            Map* tempMap = *iter;
            ui->comboBox_Maps->addItem(QString::number(tempMap->getMapID()) + " " +  QString::fromStdString(tempMap->getMapName()));
           //ui->comboBox_Maps->addItem( QString::number(1) + "Hello");
            //qDebug() << "hi" << QString::number(tempMap->getMapID()) <<  QString::fromStdString(tempMap->getMapName());
        }
   // qDebug() << "-------------";
}

void LobbyWindow::keyPressEvent(QKeyEvent *e)
{
    //qDebug() << "A" << currWorkingMap->m_containingCharacters.empty();
    if (currWorkingMap->m_containingCharacters.empty())
    {
        QMessageBox::critical(this,"Error!","Nothing to move!");
    }
    else
    {
        //if ((e->key() == Qt::Key_Up) || (e->key() == Qt::Key_Down) || (e->key() == Qt::Key_Left) || (e->key() == Qt::Key_Right))
        {
            int coordX = currWorkingChar->getCoordinateX();
            int coordY = currWorkingChar->getCoordinateY();

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

void LobbyWindow::on_pushButton_Grid_toggled(bool checked)
{
    grid = checked;
    displayCurrent();
}

void LobbyWindow::on_comboBox_Maps_activated(const QString &arg1)
{
    //qDebug() << ui->comboBox_Maps->itemData(ui->comboBox_Maps->currentData());
}
