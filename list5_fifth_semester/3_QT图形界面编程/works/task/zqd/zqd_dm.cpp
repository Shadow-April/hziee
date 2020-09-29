#include "zqd_dm.h"
#include "ui_zqd_dm.h"
#include "point.h"

zqd_dm::zqd_dm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zqd_dm)
{
    ui->setupUi(this);
    poi = new Point();
}

zqd_dm::~zqd_dm()
{
    delete ui;
    delete poi;
}

void zqd_dm::on_pushButton_clicked()
{
    poi->Set(poi->x+1,poi->y+1);
    poi->Show();
}
