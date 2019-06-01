#include "loginwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow loginWindow;

    loginWindow.show();

    return a.exec();
}
