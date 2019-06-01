#ifndef CHARACTERDETAILSWINDOW_H
#define CHARACTERDETAILSWINDOW_H

#include <QDialog>

namespace Ui {
class CharacterDetailsWindow;
}

class CharacterDetailsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CharacterDetailsWindow(QWidget *parent = nullptr);
    ~CharacterDetailsWindow();

private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_More_clicked();

    void on_pushButton_Less_clicked();

    void on_pushButton_close_2_clicked();

private:
    Ui::CharacterDetailsWindow *ui;
};

#endif // CHARACTERDETAILSWINDOW_H
