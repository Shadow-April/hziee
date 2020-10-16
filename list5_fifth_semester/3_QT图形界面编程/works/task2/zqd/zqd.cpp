#include "zqd.h"
#include "ui_zqd.h"

ZQD::ZQD(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZQD)
{
    ui->setupUi(this);
}

ZQD::~ZQD()
{
    delete ui;
}
