#include "hellodialog.h"
#include "ui_hellodialog.h"

HelloDialog::HelloDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelloDialog)
{
    ui->setupUi(this);
    p=new point();
}

HelloDialog::~HelloDialog()
{
    delete ui;
    delete p;
}

void HelloDialog::on_pushButton_clicked()
{
    p->Set(p->x+1,p->y+1);
    p->Show();
}
