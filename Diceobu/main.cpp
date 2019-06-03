#include "loginwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

#include <QDebug>

#include "mainDependancies.h"

int main(int argc, char *argv[])
{
	if (runUI)
	{
		QApplication a(argc, argv);
		LoginWindow loginWindow;

		loginWindow.show();

		return a.exec();
	}
	else
	{
		simLaunch();
	}
}
