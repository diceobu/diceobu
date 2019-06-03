#ifndef DICEOBUINFO_H
#define DICEOBUINFO_H

#include <QDialog>

namespace Ui {
class DiceobuInfo;
}

class DiceobuInfo : public QDialog
{
    Q_OBJECT

public:
    explicit DiceobuInfo(QWidget *parent = nullptr);
    ~DiceobuInfo();

private:
    Ui::DiceobuInfo *ui;
};

#endif // DICEOBUINFO_H
