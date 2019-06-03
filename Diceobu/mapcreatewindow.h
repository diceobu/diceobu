#ifndef MAPCREATEWINDOW_H
#define MAPCREATEWINDOW_H

#include <QDialog>

namespace Ui {
class MapCreateWindow;
}

class MapCreateWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MapCreateWindow(QWidget *parent = nullptr);
    ~MapCreateWindow();

private slots:
    void on_pushButton_confirm_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::MapCreateWindow *ui;
};

extern std::string mapName;
extern std::string mapFilepath;

#endif // MAPCREATEWINDOW_H
