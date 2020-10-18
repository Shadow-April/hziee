#include "zqd.h"
#include "ui_zqd.h"
#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include <QLabel>
#include "user_info.h"
#include "point.h"

ZQD::ZQD(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZQD)
{
    ui->setupUi(this);
    poi = new Point();

//    connect(ui->showChildButton,&QPushButton::clicked,
//            this,[=](){

//        QDialog dlg(this);
//        dlg.resize(800,300);
//        dlg.exec();
//      });

}

ZQD::~ZQD()
{
    delete ui;
}

void ZQD::on_pushButton_clicked()
{
    //accept();
    user_info user(this);
    user.setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    user.setModal(true);
    user.setWindowOpacity(0.8);
    user.exec();
}

void ZQD::showChildDialog()
{

}

void ZQD::on_showChildButton_clicked()
{
    poi->Set(poi->x+1,poi->y+1);
    poi->Show();
}
