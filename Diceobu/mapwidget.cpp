#include "mapwidget.h"
#include "ui_mapwidget.h"
#include <string>
#include <iostream>
#include <fstream>
#include <array>
#include <cstdlib>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

static QVector< QVector< QPixmap > > pixmap_array;

static int startingx = 0;
static int startingy = 0;
static int tilesize = 15;
static int tilesperrow = 50;
static int numoftiles = 2500;
static int counter = 0;

static QPoint point1;
static QPoint point2;

bool grid;

//static int x = 1;

MapWidget::MapWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MapWidget)
{
    ui->setupUi(this);
    initPixmapArray();
//QMessageBox::information(this,"info","moreinfo");
//    int i = -1;
//    QFile file(":/map-terrain.dat");
//    if (!file.open(QIODevice::ReadOnly))
//    {QMessageBox::information(0,"info",file.errorString());}

//    QTextStream in(&file);
//    QString tempChar = in.read(1);
//    pixmap_array.resize(numoftiles);
//    // qDebug() << pixmap_array.size();
//    while ((tempChar != '!') && ( i < pixmap_array.size()-1 ))
//        {
//        i++;
//        pixmap_array[i].resize(numoftiles);
//        // qDebug() << pixmap_array.size() << pixmap_array[i].size() << i << tempChar;

//            if (tempChar == 'd')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/dirt.png");
//            }
//            else if (tempChar == 'g')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/grass.png");
//            }
//            else if (tempChar == 'r')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/rock.png");
//            }
//            else if (tempChar == 's')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/sand.png");
//            }
//            else if (tempChar == 'w')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/water.png");
//            }
//            else if (tempChar == ' ')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/empty.png");
//            }
//            else if (tempChar == '#')
//            {
//               i--;
//            }
//            else if ((tempChar == '\n') || (tempChar == '\r'))
//            {
//               i--;
//            }
//            else if (tempChar == '!')
//            {
//                {QMessageBox::information(this,"info","moreinfo");}
//                break;
//            }
//            tempChar = in.read(1);
//        }
}

void initPixmapArray()
{
    std::ifstream inFile("map-instance.dat");
    char tempChar;
    int i{ -1 };
    //int j{ -1 };
     pixmap_array.resize(numoftiles);
    while (inFile >> std::noskipws >> tempChar && i < pixmap_array.size()-1) {
        i++;
       // // qDebug() << "READ" << tempChar << i;
        pixmap_array[i].resize(numoftiles);
                        if (tempChar == 'd')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/dirt.png");
                        }
                        else if (tempChar == 'g')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/grass.png");
                        }
                        else if (tempChar == 'r')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/rock.png");
                        }
                        else if (tempChar == 's')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/sand.png");
                        }
                        else if (tempChar == 'w')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/water.png");
                        }
                        else if (tempChar == ' ')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/empty.png");
                        }
                        else if (tempChar == 'f')
                        {
                           pixmap_array[0][i] = QPixmap(":/img/floor.png");
                        }
                        else if (tempChar == '$')
                        {
                           pixmap_array[0][i] = QPixmap(":/img/soulsand.png");
                        }
                        else if ((tempChar == '\n') || (tempChar == '\r') || (tempChar == '#'))
                        {
                           i--;
                        }
                        else if (tempChar == '1')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/dirt-scorched.png");
                        }
                        else if (tempChar == '+')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/dirt-iced.png");
                        }
                        else if (tempChar == '2')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/grass-scorched.png");
                        }
                        else if (tempChar == '_')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/grass-iced.png");
                        }
                        else if (tempChar == '6')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/soulsand-scorched.png");
                        }
                        else if (tempChar == '&')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/soulsand-iced.png");
                        }
                        else if (tempChar == '4')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/sand-scorched.png");
                        }
                        else if (tempChar == '(')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/sand-iced.png");
                        }
                        else if (tempChar == '7')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/floor-scorched.png");
                        }
                        else if (tempChar == '^')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/floor-iced.png");
                        }
                        else if (tempChar == '*')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/water-iced.png");
                        }
                        else if (tempChar == 'F')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/Warrior.png");
                        }
                        else if (tempChar == 'W')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/Wizard.png");
                        }
                        else if (tempChar == 'R')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/Rogue.png");

                        }
                        else if (tempChar == 'B')
                        {
                            pixmap_array[0][i] = QPixmap(":/img/Ranger.png");
                        }
                        else if (tempChar == '!')
                        {
                            break;
                        }
                    }
}

MapWidget::~MapWidget()
{
    delete ui;
}


static int t = 0;
void MapWidget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    t++;
    point1.setX(startingx);
    point1.setY(startingy);
    //// qDebug() << "painting FILE at" << startingx << startingy << tilesize << "for" << t;

    point2.setX(tilesize);
    point2.setY(tilesize);

    //pixmap_array.resize(numoftiles);
//    if (t==10){
////    for (int l = 0; l < 9; l++){
////        // qDebug() << pixmap_array[0][l];
////        painter.drawPixmap(800, 0, 850, 0, pixmap_array[0][l]);
////    }
//}

    for (int j = 0; j < pixmap_array.size(); j++)
    {
        painter.drawPixmap(point1.x(),point1.y(),point2.x(),point2.y(), pixmap_array[0][j]);
        counter++;
        point1.setX(point1.x()+tilesize);
        if (counter % tilesperrow == 0)
        {
            point1.setY(point1.y()+tilesize);
            point1.setX(startingx);
        }
    }
    if (grid)
    {
        //painter.QPainter::setOpacity(0.5);

        for ( int x=0; x<=750; x+=15)
        {
            painter.drawLine(x,0,x,750);
            painter.drawLine(0,x,750,x);
        }
    }



}









//    int i=0;

//    pixmap_array[i].resize(numoftiles);
//    QFile file("F:\\Documents\\GitHub\\DONTTOUCH\\DiceobuUI\\Sample2.dat");
//    if (!file.open(QIODevice::ReadOnly))
//    {QMessageBox::information(0,"info",file.errorString());}

//    QTextStream in(&file);
//if (::x == 1)
//{
//    ::x=0;
//    QString tempChar = in.read(1);
//    while (tempChar != '!')
//        {
//      pixmap_array.resize(numoftiles);
//        if ( i < pixmap_array.size() ){
//            if (tempChar == 'd')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/dirt.png");
//            }
//            else if (tempChar == 'g')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/grass.png");
//            }
//            else if (tempChar == 'r')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/rock.png");
//            }
//            else if (tempChar == 's')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/sand.png");
//            }
//            else if (tempChar == 'w')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/water.png");
//            }
//            else if (tempChar == ' ')
//            {
//                pixmap_array[0][i] = QPixmap(":/img/empty.png");
//            }
//            else if (tempChar == '#')
//            {

//            }
//            else if (tempChar == '\n')
//            {
//                point1.setY(point1.y()+tilesize);
//                point1.setX(startingx);
//            }
//            else if (tempChar == '!')
//            {
//                {QMessageBox::information(this,"info","moreinfo");}
//                break;
//            }
//            tempChar = in.read(1);
//            painter.drawPixmap(point1.x(),point1.y(),point2.x(),point2.y(), pixmap_array[0][i]);
//            i++;
//        }
//    }


//        if ((i >= 95 && i <= 99) || (i >= 110 && i <= 114) || (i >= 81 && i <= 84) || (i >= 126 && i <= 128)){
//            pixmap_array[0][i] = QPixmap(":/img/water.png");
//        } else if ((i >= 79 && i <= 81) || (i >= 124 && i <= 125) || (i >= 140 && i <= 144) || (i >= 65 && i <= 70) || (i >= 83 && i <= 85) || (i >= 128 && i <= 130) ||
//                   (i==94) || (i==100)|| (i==109)|| (i==115)) {
//            pixmap_array[0][i] = QPixmap(":/img/sand.png");
//        } else {
//            pixmap_array[0][i] = QPixmap(":/img/grass3.png");
//        }
//        counter++;
//        point1.setX(point1.x()+tilesize);
//        if (counter % tilesperrow == 0) {
//            point1.setY(point1.y()+tilesize);
//            point1.setX(startingx);
//        }

//    }
//}
//    switch (tempChar) {

//    case 'd': //dirt
//        QMessageBox::warning(this,"Failed Login","AAAAQ username or password.");

//        pixmap_array[0][i] = QPixmap(":/img/sand.png");
//    break;

//    case 'g': //grass
//        pixmap_array[0][i] = QPixmap(":/img/grass.png");
//    break;

//    case 'r': //rock
//         pixmap_array[0][i] = QPixmap(":/img/rock.png");
//    break;

//    case 's': //sand
//         pixmap_array[0][i] = QPixmap(":/img/sand.png");
//    break;

//    case 'w': //water
//         pixmap_array[0][i] = QPixmap(":/img/water.png");
//    break;

//    case ' ': //empty
//         pixmap_array[0][i] = QPixmap(":/img/empty.png");
//    break;

//    case '\n':
//       // point1.setY(point1.y()+tilesize);
//       // point1.setX(startingx);
//    break;

//    case '#':

//    break;
//    }
//}
