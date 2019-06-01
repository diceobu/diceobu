#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QWidget>

#include <QPaintEvent>
#include <QPainter>
#include "lobbywindow.h"

namespace Ui {
class MapWidget;
}

class MapWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MapWidget(QWidget *parent = nullptr);
    ~MapWidget();
//private:
    Ui::MapWidget *ui;
protected:
    void paintEvent(QPaintEvent *e);


};

void initPixmapArray();

extern bool grid;

#endif // MAPWIDGET_H
