#include <QMessageBox>
#include "mainDependancies.h"
#include "mainclass.h"
#include "lobbywindow.h"


MainClass mainClass
{
    connect( mainClass,SIGNAL(refreshCurrents()), lobbyWindow, SLOT(displayCurrent()));
};
