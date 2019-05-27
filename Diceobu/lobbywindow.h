#ifndef LOBBYWINDOW_H
#define LOBBYWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include "mainuiclass.h"
#include "charcreatewindow.h"
#include "movewindow.h"

#include <QDebug>
#include <QKeyEvent>

namespace Ui {
class LobbyWindow;
}

class LobbyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LobbyWindow(QWidget *parent = nullptr);
    ~LobbyWindow();

private:
    Ui::LobbyWindow *ui;
    CharCreateWindow *charCreateWindow;
    MoveWindow *moveWindow;
    void updateLists();
protected:
  //  void paintEvent(QPaintEvent *e);

public slots:
    void displayCurrent();
    void updateSystemLog(std::string input,Map* this_currWorkingMap,int currWorkingCharID, std::string currWorkingCharName,
                         Map* previousMap, std::string previousMapName, Character* previousCharacter,std::string previousCharacterName, int coordX,int coordY);

private slots:
    void on_pushButton_5_clicked();
    void on_actionNewCharacter_triggered();
    void on_actionDeleteMap_triggered();
    void on_actionNewMap_triggered();
    void on_pushButton_nextMap_clicked();
    void on_actionDeleteCharacter_triggered();
    void on_pushButton_nextCharacter_clicked();
    void on_pushButton_Move_clicked();

    void keyPressEvent (QKeyEvent *e);
    void on_pushButton_Grid_toggled(bool checked);
    void on_comboBox_Maps_activated(const QString &arg1);
};

extern MainUIClass *mui;

#endif // LOBBYWINDOW_H
