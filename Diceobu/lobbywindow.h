#ifndef LOBBYWINDOW_H
#define LOBBYWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include "mainuiclass.h"
#include "charcreatewindow.h"
#include "movewindow.h"
#include "mapcreatewindow.h"
#include "characterdetailswindow.h"
#include "powersettingswindow.h"
#include "combatstatuswindow.h"

#include <QDebug>
#include <QKeyEvent>
#include <QListWidget>

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
    MapCreateWindow *mapCreateWindow;
    CharacterDetailsWindow *characterDetailsWindow;
    PowerSettingsWindow *powerSettingsWindow;
    CombatStatusWindow *combatStatusWindow;

    void updateLists();
protected:
  //  void paintEvent(QPaintEvent *e);

public slots:
    void displayCurrent();
    void updateSystemLog(std::string input,Map* this_currWorkingMap,int currWorkingCharID, std::string currWorkingCharName,
                         Map* previousMap, std::string previousMapName, Character* previousCharacter,std::string previousCharacterName, int coordX,int coordY);
    void updateCombatLog(int input, Character* targetChar, int damageDealt, std::string powerUsed);

    void errorHandler(int errorCode);

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
    void on_comboBox_Characters_activated(const QString &arg1);
    void on_pushButton_Character_Details_clicked();
    void on_actionSaveCharacter_triggered();
    void on_actionLoadCharacter_triggered();
    void on_pushButton_Engage_Combat_toggled(bool checked);
    void on_listWidget_Powers_Lobby_itemClicked(QListWidgetItem *item);
    void on_pushButton_Combat_Status_clicked();
    void on_pushButton_Skip_Turn_clicked();
    void on_pushButton_System_Log_toggled(bool checked);
    void on_pushButton_Combat_Log_toggled(bool checked);
};

extern MainUIClass *mui;

extern int targetMapID;
extern int targetCharacterID;

extern int directionalMovement;

extern QString tempQString;


#endif // LOBBYWINDOW_H
