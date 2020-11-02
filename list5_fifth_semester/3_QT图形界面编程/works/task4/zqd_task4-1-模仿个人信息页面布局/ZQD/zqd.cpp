#include "zqd.h"
#include "ui_zqd.h"

#include<QBoxLayout>
#include<QGridLayout>
#include<QFormLayout>
#include<QHBoxLayout>

int i = 1;

ZQD::ZQD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ZQD)
{

    ui->setupUi(this);
    ui->labelpicture->setPixmap(QPixmap(":/images/images/11.png"));
}

void ZQD::on_pushButton_clicked()
{
    i = i % 5;
    i++;
    QString s_i = QString::number(i);
    QString path = ":/images/images/"+s_i+".png";
    ui->labelpicture->setPixmap(QPixmap(path));

}


ZQD::~ZQD()
{
    delete ui;
}


