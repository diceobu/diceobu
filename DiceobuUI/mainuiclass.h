#ifndef MAINUICLASS_H
#define MAINUICLASS_H

#include "Map.h"
#include "Character.h"
#include "DiceobuLibrary.h"
#include <QObject>

class MainUIClass : public QObject
{
    Q_OBJECT
public:
    explicit MainUIClass(QObject *parent = nullptr);

signals:
    void refreshCurrent();
    void updateLog(std::string input,Map* currWorkingMap,int currWorkingCharID, std::string currWorkingCharName,
                   Map* previousMap, std::string previousMapName, Character* previousCharacter,std::string previousCharacterName, int coordX,int coordY);
    void errorMessage(int errorCode);


public slots:

};

#endif // MAINUICLASS_H
