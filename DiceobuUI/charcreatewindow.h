#ifndef CHARCREATEWINDOW_H
#define CHARCREATEWINDOW_H

#include <QDialog>

namespace Ui {
class CharCreateWindow;
}

class CharCreateWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CharCreateWindow(QWidget *parent = nullptr);
    ~CharCreateWindow();

private slots:
    void on_pushButton_confirm_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::CharCreateWindow *ui;
};

#endif // CHARCREATEWINDOW_H
