#include "diceobuinfo.h"
#include "ui_diceobuinfo.h"

DiceobuInfo::DiceobuInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiceobuInfo)
{
    ui->setupUi(this);
}

DiceobuInfo::~DiceobuInfo()
{
    delete ui;
}
