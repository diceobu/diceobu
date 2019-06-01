#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMessageBox>
#include "mainDependancies.h"
#include "mainclass.h"
#include "mainDependancies.h"
#include "DiceobuLibrary.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    setFixedSize(1280,720);
    QPixmap loginLogo(":/img/Diceobu.png");
    ui->login_logo->setPixmap(loginLogo);
    clearMapInstance();
    //tatic std::list<Map*> activeMapz;

    //// qDebug() << activeMapz.empty();
    checkLists();

    //connect(mainClass, SIGNAL(refreshCurrents()), lobbyWindow, SLOT(displayCurrent()));

   //QPushButton *aplo = new QPushButton;

    //ui->comboBox->Additem
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_clicked()
{
    QString username = ui->login_username->text();
    QString password = ui->login_password->text();

    if ((username == "admin" && password == "admin") || (username == "test" && password == "123")){
    close();
    lobbyWindow = new LobbyWindow(this);
    lobbyWindow->show();
    } else {
         QMessageBox::warning(this,"Failed Login","Invalid username or password.");
    }
}


void LoginWindow::on_pushButton_2_clicked()
{
    close();
     //QMessageBox::warning(this,"Failed Login","Invalid username or password.");
    lobbyWindow = new LobbyWindow(this);
    lobbyWindow->show();
}

