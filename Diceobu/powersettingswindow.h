#ifndef POWERSETTINGSWINDOW_H
#define POWERSETTINGSWINDOW_H

#include <QDialog>

namespace Ui {
class PowerSettingsWindow;
}

class PowerSettingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PowerSettingsWindow(QWidget *parent = nullptr);
    ~PowerSettingsWindow();

private slots:
    void on_pushButton_cancel_clicked();

    void on_pushButton_confirm_clicked();

private:
    Ui::PowerSettingsWindow *ui;
};

#endif // POWERSETTINGSWINDOW_H
